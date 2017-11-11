#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin >> n;
        int nm[n];
        int fn = 2,cnt=0;
        for(int j=0; j<n; j++){
            cin >> nm[j];
            if(nm[j]>fn){
                cnt+=ceil((nm[j]-fn)/5.0);
                fn = nm[j];
            }
        }
        cout << "Case " << i << ": " << cnt << endl;
    }
    return 0;
}
