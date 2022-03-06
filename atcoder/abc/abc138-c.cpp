#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<double> a(n); rep(i,n) cin >> a[i];
  sort(a.begin(),a.end());
  while(a.size()!=1){
    a[0]=(a[0]+a[1])/2;
    a.erase(a.begin()+1);
  }
  cout << a[0] << endl;
  return 0;
}