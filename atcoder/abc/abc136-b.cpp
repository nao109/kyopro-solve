#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,ans=0;
  cin >> n;
  for(int i=1; i<=n; ++i){
    if(to_string(i).size()%2==1) ++ans;
  }
  cout << ans << endl;
  return 0;
}