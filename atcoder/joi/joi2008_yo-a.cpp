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
  int n; cin >> n; n=1000-n;
  int ans=0,ch=500;
  rep(i,6){
    ans+=n/ch; n-=(n/ch)*ch;
    if(i%2==0) ch/=5;
    else ch/=2;
  }
  cout << ans << endl;
  return 0;
}