#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c,d,e,k;
  cin >> a >> b >> c >> d >> e >> k;
  int ch[10]={a-b,a-c,a-d,a-e,b-c,b-d,b-e,c-d,c-e,d-e};
  bool ans=true;
  rep(i,10){
    if(abs(ch[i])>k){
      ans=false;
      break;
    }
  }
  if(ans) cout << "Yay!\n";
  else cout << ":(\n";
  return 0;
}