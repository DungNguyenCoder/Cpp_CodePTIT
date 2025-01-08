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
   string s;
   cin >> s;
   int cnt = 1;
   stack<int> st;
   st.push(1);
   for(int i = 0; i < s.size(); i++){
      ++cnt;
      if(s[i] == 'I'){
         while(!st.empty()){
            cout << st.top();
            st.pop();
         }
      }
      st.push(cnt);
   }
   while(!st.empty()){
      cout << st.top();
      st.pop();
   }
   cout << endl;
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