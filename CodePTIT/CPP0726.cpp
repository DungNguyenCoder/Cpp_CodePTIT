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
#define TEST 1

string multiplyLargeNumbers(string num1, string num2) 
{
    int n1 = num1.size();
    int n2 = num2.size();
    if (n1 == 0 || n2 == 0) return "0";
    vector<int> result(n1 + n2, 0);
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i = n1 - 1; i >= 0; i--) 
    {
        int carry = 0;
        int n1_digit = num1[i] - '0';
        i_n2 = 0;
        for (int j = n2 - 1; j >= 0; j--) 
        {
            int n2_digit = num2[j] - '0';
            int sum = n1_digit * n2_digit + result[i_n1 + i_n2] + carry;
            carry = sum / 10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0) result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = result.size() - 1;
    while (i >= 0 && result[i] == 0) i--;
    if (i == -1) return "0";
    string s = "";
    while (i >= 0) s += std::to_string(result[i--]);
    return s;
}

ll ans(string s, ll m)
{
    ll res = 0;
    for(char x : s)
        res = (res*10 + x - '0')%m;
    return res;
}


inline void solution()
{
    string a,b;
    ll c;
    cin >> a >> b >> c;
    cout << ans(multiplyLargeNumbers(a,b),c) << endl;
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