#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  string s,t;
  cin >> s;
  t=s;
  reverse(all(t));
  if(s==t) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}