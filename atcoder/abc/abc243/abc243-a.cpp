#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int v,a,b,c; cin >> v >> a >> b >> c;
  int sum=0,cnt=0;
  while(sum<=v){
    if(cnt%3==0) sum+=a;
    else if(cnt%3==1) sum+=b;
    else if(cnt%3==2) sum+=c;
    ++cnt;
  }
  if(cnt%3==0) cout << "T\n";
  else if(cnt%3==1) cout << "F\n";
  else cout << "M\n";
  return 0;
}