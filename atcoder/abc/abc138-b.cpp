#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<double> a(n); rep(i,n) cin >> a[i];
  double sum=0;
  rep(i,n){
    sum+=1/a[i];
  }
  cout << 1/sum << endl;
  return 0;
}