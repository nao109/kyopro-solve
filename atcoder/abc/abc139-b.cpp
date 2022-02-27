#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  if(b==1) cout << 0 << endl;
  else{
    int cnt=0,kosu=0;
    while(kosu<b){
      ++cnt;
      if(cnt==1) kosu=a;
      else kosu+=a-1;
    }
    cout << cnt << endl;
  }
  return 0;
}