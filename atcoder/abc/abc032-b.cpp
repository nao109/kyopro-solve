#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  string s; int k; cin >> s >> k;
  int ss=s.size();
  set<string> a;
  rep(i,ss)rep(j,ss){
    string t=s.substr(j,i+1);
    if(!a.count(t)) a.insert(t);
  }
  int cnt=0;
  for(string i:a){
    int is=i.size();
    if(is==k) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}