#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,ans=0;
  rep(i,3){
    cin >> a;
    ans+=a;
  }
  if(ans>21) cout << "bust\n";
  else cout << "win\n";
  return 0;
}