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
  vector<pair<int,int>> a(n);
  rep(i,n){
    cin >> a[i].fi >> a[i].se; a[i].se*=-1;
  }
  sort(a.begin(),a.end());
  rep(i,n) a[i].se*=-1;

  priority_queue<int> task; int i=0,ans=0;
  rep(k,n){
    while(a[i].fi<=k+1){
      if(i>=n) break;
      task.push(a[i].se); ++i;
    }
    ans+=task.top(); task.pop();
    cout << ans << endl;
  }
  return 0;
}