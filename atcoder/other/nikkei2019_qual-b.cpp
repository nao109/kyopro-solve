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
  string a,b,c; cin >> a >> b >> c;
  int cnt=0;
  rep(i,n){
    if(a[i]==b[i]&&b[i]!=c[i]) ++cnt;
    else if(a[i]==c[i]&&b[i]!=c[i]) ++cnt;
    else if(a[i]!=b[i]&&b[i]==c[i]) ++cnt;
    else if(a[i]!=b[i]&&b[i]!=c[i]&&a[i]!=c[i]) cnt+=2;
  }
  cout << cnt << endl;
  return 0;
}