#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;

bool TEST = 1;

void solution()
{
    string s;
    cin >> s;
    ll sum = 0;
    ll tmp = 0;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        if(isalpha(s[i]))
        {
        }
        else
        {
            tmp = tmp * 10 + (s[i] - '0');  
        }
        if(isalpha(s[i + 1]) || s[i + 1] == NULL)
        {
            sum += tmp;
            tmp = 0;
        }
    }
    cout << sum << "\n";
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