#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> a(n); int sum=0;
  rep(i,n){
    cin >> a[i];
    sum+=a[i];
  }
  sum/=n;
  rep(i,n){
    cout << abs(a[i]-sum) << endl;
  }
  return 0;
}