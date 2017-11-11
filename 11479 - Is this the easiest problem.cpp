#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        long a,b,c;
        cin >> a >> b >> c;
        if(a+b>c && b+c>a && c+a>b){
            if(a==b && b==c) cout << "Case " << i << ": " << "Equilateral" << endl;
            else if(a==b || b==c || c==a) cout  << "Case " << i << ": " << "Isosceles" << endl;
            else if(a!=b && b!=c) cout  << "Case " << i << ": " << "Scalene" << endl;
        }else cout  << "Case " << i << ": " << "Invalid" << endl;
    }
    return 0;
}
