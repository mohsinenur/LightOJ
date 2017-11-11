#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        double c;
        cin >> c;
        double a = pow((c*2),2) - (3.1415926535897932385*(pow(c,2)));
        cout << fixed;
        cout << setprecision(2) << "Case " << i << ": " << a << endl;
    }
    return 0;
}
