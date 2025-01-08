#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;
#define PI 3.141592653589793238
#define TEST 1

struct toado
{
    double x,y;
};

inline void solution()
{
    toado a,b,c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    double A = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    double B = sqrt((b.x-c.x)*(b.x-c.x) + (b.y-c.y)*(b.y-c.y));
    double C = sqrt((c.x-a.x)*(c.x-a.x) + (c.y-a.y)*(c.y-a.y));
    if(A + B > C && B + C > A && C + A > B)
    {
        double p = (A + B + C) / 2;
        double s = sqrt(p * (p - A) * (p - B) * (p - C));
        double r = A*B*C/(4*s);
        double ans = r*r*PI;
        printf("%.3lf\n",ans);
    }
    else
        cout << "INVALID\n";
}

int main()
{
    faster();
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--)
    {
        solution();
    }
}