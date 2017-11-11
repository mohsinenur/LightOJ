#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        if(a>c) swap(a,c);
        if(b>c) swap(b,c);
        if(a*a+b*b==c*c) cout << "Case " << i << ": yes" << endl;
        else cout << "Case " << i << ": no" << endl;
    }
    return 0;
}
