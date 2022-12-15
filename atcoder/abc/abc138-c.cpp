#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<long double> v(n);
  for(long double &i:v) cin >> i;
  sort(all(v));

  long double ans=v[0];
  for(int i=1; i<n; ++i){
    ans=(v[i]+ans)/2;
  }
  cout << ans << endl;
  return 0;
}