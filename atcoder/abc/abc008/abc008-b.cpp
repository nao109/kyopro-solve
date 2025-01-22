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
  map<string,int> cnt;
  rep(i,n){
    string s; cin >> s;
    if(cnt.count(s)) ++cnt[s];
    else cnt[s]=1;
  }
  int ans=0; string name;
  for(auto s:cnt){
    if(s.se>ans){
      ans=s.se; name=s.fi;
    }
  }
  cout << name << endl;
  return 0;
}