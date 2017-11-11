#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,ten=10;
    cin >> t;
    for(long long i=1; i<=t; i++){
        cin >> a;
        int arr[32],cnt=0;
        for(int j=0; j<32; j++){
            arr[j] = a & (1 << j) ? 1 : 0;
            if(arr[j] == 1) cnt++;
        }
        if(cnt%2==0) cout << "Case " << i << ": even" << endl;
        else cout << "Case " << i << ": odd" << endl;
    }
    return 0;
}
