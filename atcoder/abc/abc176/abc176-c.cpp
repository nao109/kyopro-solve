#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  ll sum=0;
  for(int i=0; i<n-1; ++i){
    if(a[i]>a[i+1]){
      sum+=a[i]-a[i+1];
      a[i+1]=a[i];
    }
  }
  cout << sum << endl;
  return 0;
}