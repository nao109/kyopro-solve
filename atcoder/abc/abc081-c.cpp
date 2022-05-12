#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  cout << fixed << setprecision(15);
  int n,k; cin >> n >> k;
  map<int,int> a;
  rep(i,n){
    int c; cin >> c;
    if(a.count(c)) ++a[c];
    else a[c]=1;
  }
  priority_queue<int,vector<int>,greater<int>> c;
  for(auto i:a){int ch=i.se; c.push(ch);}
  int ans=0;
  while(c.size()>k){
    ans+=c.top(); c.pop();
  }
  cout << ans << endl;
  return 0;
}