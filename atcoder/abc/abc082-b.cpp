#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string s,t; cin >> s >> t;
  sort(s.begin(),s.end());
  sort(t.begin(),t.end());
  reverse(t.begin(),t.end());
  if(s<t) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}