#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  int n; double x; cin >> n >> x;
  double alco=0; int ans=-1;
  rep(i,n){
    double v,p; cin >> v >> p;
    alco+=v*p/100;
    if(alco>x){ans=i+1; break;}
  }
  cout << ans << endl;
  return 0;
}