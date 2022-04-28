#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  string s; cin >> s;
  int n=s.size();
  string s1=s.substr(0,(n-1)/2),s2=s.substr((n+3)/2-1,(n-1)/2);
  string t=s,t1=s1,t2=s2;
  reverse(all(t)); reverse(all(t1)); reverse(all(t2));
  if(s==t&&s1==t1&&s2==t2) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}