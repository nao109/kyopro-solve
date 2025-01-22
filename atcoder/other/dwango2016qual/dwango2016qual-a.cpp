#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;

  int ans=0;
  for(int i=1; i<=n; ++i){
    if(i%25==0) ans++;
  }
  cout << ans << endl;
  return 0;
}