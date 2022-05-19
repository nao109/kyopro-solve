#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n,k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  ll sum=0;
  for(int i=0; i<n-k+1; ++i){
    for(int j=0; j<k; ++j){
      sum+=a[i+j];
    }
  }
  cout << sum << endl;
  return 0;
}