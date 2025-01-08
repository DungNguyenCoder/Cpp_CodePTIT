#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int sum (int n)
{
    int tong = 0;
    while (n)
    {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

bool smith (int n)
{
    int sum1 = sum(n);
    int sum2 = 0;
    int tmp = n;
    for (int i = 2; i <= sqrt(tmp); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                sum2 += sum(i);
                n /= i;
            }
        }
    }
    if (tmp == n) return false;
    if (n > 1) sum2 += sum(n);
    return sum1 == sum2;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (smith(n)) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}