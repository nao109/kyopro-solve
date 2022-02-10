#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> a(n);
  int ans=0;
  rep(i,n){
    cin >> a[i];
    if(a[i]==2) ++ans;
    else if(a[i]==4) ++ans;
    else if(a[i]==5) ans+=2;
    else if(a[i]==6) ans+=3;
    else if(a[i]==8) ++ans;
  }
  cout << ans << endl;
  return 0;
}