#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
bool f(int i,int n){
  while(i>0){
    if(i%n==7) return false;
    i/=n;
  }
  return true;
}
int main(){
  int n;
  cin >> n;
  int ans=0;
  for(int i=1; i<=n; ++i){
    if(f(i,10) && f(i,8)) ++ans;
  }
  cout << ans << endl;
  return 0;
}