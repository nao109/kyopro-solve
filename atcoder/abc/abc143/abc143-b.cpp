#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> d(n); rep(i,n) cin >> d[i];
  int sum=0;
  rep(i,n)rep(j,i){
    sum+=d[i]*d[j];
  }
  cout << sum << endl;
  return 0;
}