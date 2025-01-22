#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
bool is_prime(int i){
  if(i/10000==i%10){
    int j=(i/10)%10,k=(i/1000)%10;
    if(j==k) return true;
    else return false;
  }
  else return false;
}

int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  int ans=0;
  for(int i=a; i<=b; ++i){
    if(is_prime(i)) ++ans;
  }
  cout << ans << endl;
  return 0;
}