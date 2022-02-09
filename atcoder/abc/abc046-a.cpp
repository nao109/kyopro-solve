#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  vector<bool> ch(100,false);
  rep(i,3){
    int a; cin >> a;
    ch[a-1]=true;
  }
  int ans=0;
  rep(i,100){
    if(ch[i]) ++ans;
  }
  cout << ans << endl;
  return 0;
}