#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,q;
  cin >> n >> q;
  vector<int> a(n),sum(n);
  for(int i=0; i<n; ++i){
    cin >> a[i];
    if(i==0) sum[i]=a[i];
    else sum[i]=sum[i-1]+a[i];
  }
  
  for(int i=0; i<q; ++i){
    int l,r;
    cin >> l >> r;
    --l,--r;
    cout << sum[r]-sum[l-1] << endl;
  }
  return 0;
}