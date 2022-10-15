#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,ans=1;
  cin >> n;
  for(int i=0; i<n; ++i) ans*=i+1;
  cout << ans << endl;
  return 0;
}