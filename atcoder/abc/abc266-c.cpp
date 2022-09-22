#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  vector<int> x(4),y(4);
  for(int i=0; i<4; ++i) cin >> x[i] >> y[i];
  bool flag=true;
  for(int i=0; i<4; ++i){
    if((x[(i+1)%4]-x[i])*(y[(i+3)%4]-y[i])-(x[(i+3)%4]-x[i])*(y[(i+1)%4]-y[i])<=0) flag=false;
  }
  cout << (flag ? "Yes\n" : "No\n");
  return 0;
}