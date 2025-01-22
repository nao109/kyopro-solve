#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<bool> ch(1000,false);
  rep(i,n){
    int a; cin >> a;
    if(!ch[a-1]) ch[a-1]=true;
  }
  int ans=0;
  for(int i=999; i>=0; --i){
    if(ch[i]){
      if(ans==0) ans--;
      else if(ans==-1){
        ans=i+1; break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}