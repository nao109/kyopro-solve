#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  double n,t,a; cin >> n >> t >> a;
  vector<double> th(n);
  rep(i,n){
    cin >> th[i];
    th[i]=t-th[i]*6/1000;
  }
  vector<pair<double,int>> difth(n);
  rep(i,n){
    difth[i].second=i+1;
    difth[i].first=max(a-th[i],th[i]-a);
  }
  sort(difth.begin(),difth.end());
  cout << difth[0].second << endl;
  return 0;
}