#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> ch(100000,0);
  rep(i,n){
    int a; cin >> a;
    ++ch[a-1];
  }
  int ans=0;
  rep(i,100000){
    if(ch[i]>=2) ans+=ch[i]-1;
  }
  cout << ans << endl;
  return 0;
}