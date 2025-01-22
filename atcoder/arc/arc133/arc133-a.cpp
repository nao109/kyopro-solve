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
  vector<int> a;
  int M=0; bool flag=true;
  rep(i,n){
    int x; cin >> x;
    a.pb(x);
    if(flag){
      if(x>M) M=x;
      else if(x<M) flag=false;
    }
  }
  auto itr=a.begin();
  while(itr!=a.end()){
    itr=find(a.begin(), a.end(), M);
    if(itr!=a.end()) a.erase(itr);
  }
  for(int i:a) cout << i << " ";
  return 0;
}