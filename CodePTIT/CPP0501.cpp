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
#define TEST 0

struct Point{

    double x, y;
};

Point input(Point &x)
{
    cin >> x.x >> x.y;
    return x;
}

double distance(Point a, Point b)
{
    double ans = sqrt(pow(1.0*(a.x-b.x),2) + pow(1.0*(a.y-b.y),2));
    return ans;
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}