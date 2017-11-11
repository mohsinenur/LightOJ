#include<iostream>
using namespace std;
int main()
{
    int rev = 0, digit, t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int num = n;
        while(num != 0)
        {
            digit = num%10;
            rev = (rev*10) + digit;
            num = num/10;
        }

        if(rev == n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
