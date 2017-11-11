#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n, m, result = 0, cntN = 1;
        cin >> n >> m;
        for(int j = 1; j <= n; j++)
        {
            if(cntN > m)
            {
                result += j;
                cntN++;
                if(cntN == (m*2)+1)
                    cntN = 1;
            }else
            {
                result -= j;
                cntN++;
            }
        }

        cout << "Case " << i << ": " << result << endl;
    }

    return 0;
}
