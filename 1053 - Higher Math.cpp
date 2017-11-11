#include<bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932385
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        double a,b,c,A,B,C;
        cin >> a >> b >> c;
        if(a+b>c && b+c>a && c+a>b){
            A = (acos((b*b+c*c-a*a)/(2*(b*c)))*180)/PI;
            B = (acos((c*c+a*a-b*b)/(2*(a*c)))*180)/PI;
            C = (acos((b*b+a*a-c*c)/(2*(b*a)))*180)/PI;
            if((A==90) || (B==90) || (C==90)) cout << "Case " << i << " : yes" << endl;
            else cout << "Case " << i << " : no" << endl;
        }else cout << "Case " << i << " : no" << endl;
    }
    return 0;
}
