#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int me, lift;
        cin >> me >> lift;

        if(me>lift)
        {
            cout << "Case " << i << ": " << (me-lift)*4+(me*4)+6+10+3 << endl;
        }else
        {
            cout << "Case " << i << ": " << (lift*4)+6+10+3 << endl;
        }
    }

    return 0;
}
