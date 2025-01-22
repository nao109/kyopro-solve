#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int x,n;
  cin >> x >> n;
  set<int> p;
  for(int i=0; i<n; ++i){
    int a; cin >> a;
    p.insert(a);
  }
  int ans;
  for(int i=0; i<=100; ++i){
    if(!p.count(x-i)){
      ans=x-i;
      break;
    }
    else if(!p.count(x+i)){
      ans=x+i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}