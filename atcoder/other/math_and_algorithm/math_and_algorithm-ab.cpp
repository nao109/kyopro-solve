#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<ll> cnt(n);
  cnt[0]=1,cnt[1]=2;
  for(int i=2; i<n; ++i) cnt[i]=cnt[i-1]+cnt[i-2];
  cout << cnt[n-1] << endl;
  return 0;
}