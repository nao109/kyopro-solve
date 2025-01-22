#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<pair<int,string>> s(n);
  int cnt=0;
  rep(i,n){
    cin >> s[i].se >> s[i].fi;
    cnt+=s[i].fi;
  }
  sort(s.begin(),s.end()); reverse(s.begin(),s.end());
  string name="atcoder";
  if(2*s[0].fi>cnt) name=s[0].se;
  cout << name << endl;
  return 0;
}