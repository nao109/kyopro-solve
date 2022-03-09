#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string a,b; cin >> a >> b;
  int as=a.size(),bs=b.size();
  bool ch=false;
  int s=min(as,bs);
  rep(i,s){
    if(a.at(as-1-i)+b.at(bs-1-i)-2*'0'>=10){
      ch=true; break;
    }
  }
  if(!ch) cout << "Easy" << endl;
  else cout << "Hard" << endl;
  return 0;
}