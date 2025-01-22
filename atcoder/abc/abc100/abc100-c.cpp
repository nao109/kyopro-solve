#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> cnt(n,0);
  bool is_even=true;
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    while(a%2==0){
      ++cnt[i];
      a/=2;
    }
    if(cnt[i]==0) is_even=false;
  }
  ll ans=0;
  for(int &i:cnt) ans+=i;
  cout << ans << endl;
  return 0;
}