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
  for(int i=2; i<n; ++i){
    set<int> cnt;
    for(int j=1; j*j<=i; ++j){
      if(i%j==0) cnt.insert(j),cnt.insert(i/j);
    }
    if(cnt.size()==2) ++ans;
  }
  cout << ans << endl;
  return 0;
}