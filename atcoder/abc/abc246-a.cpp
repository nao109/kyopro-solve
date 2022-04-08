#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  map<int,int> x,y;
  rep(i,3){
    int a,b; cin >> a >> b;
    if(!x.count(a)) x[a]=1;
    else ++x[a];
    if(!y.count(b)) y[b]=1;
    else ++y[b];
  }
  for(auto p:x){
    int a = p.fi;
    if(x[a]==1) cout << a << " ";
  }
  for(auto p:y){
    int b = p.fi;
    if(y[b]==1) cout << b << endl;
  }
  return 0;
}