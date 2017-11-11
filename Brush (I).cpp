#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        int s,sum=0,d;
        cin >> s;
        while(s!=0){
            cin >> d;
            if(d>=0) sum+=d;
            s--;
        }
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}
