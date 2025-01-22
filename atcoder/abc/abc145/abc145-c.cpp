#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> x(n),y(n),a(n);
  for(int i=0; i<n; ++i){
    cin >> x[i] >> y[i];
    a[i]=i;
  }
  
  long double ans=0;
  do{
    for(int i=0; i<n-1; ++i){
      long double dx=x[a[i+1]]-x[a[i]], dy=y[a[i+1]]-y[a[i]];
      long double l=sqrt(dx*dx+dy*dy);
      ans+=l;
    }
  }while(next_permutation(all(a)));
  for(int i=1; i<=n; ++i) ans/=i;
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}