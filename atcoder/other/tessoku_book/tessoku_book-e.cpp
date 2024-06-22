#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k;
  cin >> n >> k;
  int ans=0;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(i+j+1<=k && k<=i+j+n) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}