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

inline void solution() {
   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++)
      cin >> a[i];
   int cnt = 0;
   while(1){
      for(int i = 0; i < n; i++){
         if(a[i]%2){
            ++cnt;
            a[i]--;
         }
      }
      for(int i = 0; i < n; i++){
         a[i] /= 2;
      }
      ++cnt;
      bool ok = true;
      for(int i = 0; i < n; i++){
         if(a[i] != 0)
            ok = false;
      }
      if(ok)
         break;
   }
   cout << cnt - 1 << endl;
}

int main() {
    faster();
    int t;
    if(TEST) {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--) {
        solution();
    }
}