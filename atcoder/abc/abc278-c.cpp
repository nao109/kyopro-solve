#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,q;
  cin >> n >> q;
  map<int,set<int>> follow;
  for(int i=0; i<q; ++i){
    int t,a,b;
    cin >> t >> a >> b;

    if(t==1) follow[a].insert(b);
    if(t==2) follow[a].erase(b);
    if(t==3){
      if(follow[a].count(b) && follow[b].count(a)) cout << "Yes\n";
      else cout << "No\n";
    }
  }
  return 0;
}