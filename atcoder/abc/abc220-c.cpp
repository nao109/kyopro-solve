#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  vector<int> a(n); int suma=0;
  rep(i,n){
    cin >> a[i];
    suma+=a[i];
  }
  int x; cin >> x;
  int cnt=(x/suma)*a.size(),i=0;
  x-=(x/suma)*suma;
  while(x>=0){
    x-=a[i]; ++cnt; ++i;
  }
  cout << cnt << endl;
  return 0;
}