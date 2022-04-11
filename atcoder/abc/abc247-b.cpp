#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  map<string,int> s;
  rep(i,2*n){
    string name; cin >> name;
    if(!s.count(name)) s[name]=1;
    else ++s[name];
  }
  int ans=0;
  for(auto a:s){
    int cnt=a.se;
    if(cnt>1) ++ans;
  }
  if(ans>1) cout << "No\n";
  else cout << "Yes\n";
  return 0;
}