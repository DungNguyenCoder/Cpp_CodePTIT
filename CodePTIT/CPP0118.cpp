#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int i = 2;
        int cnt2 = 0;
        if (n == 1) 
        {
            cout << "0";
            return 0;
        }
        else
        {
            while (n > 1)
            {
                int cnt1 = 0;
                if (n % i == 0) cnt2 += 1;
                while (n % i == 0)
                {
                    cnt1 += 1;
                    n /= i;
                    if (cnt1 == 2)
                    {
                        cout << "0";
                        return 0;
                    }
                }
                i += 1;
            }
            if (cnt2 != 3) cout << "0";
            else if (cnt2 == 3) cout << "1";
        }
        cout << endl;
    }
}