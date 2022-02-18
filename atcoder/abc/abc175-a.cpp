#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string w1[4]={"SSR","SRS","RSS","RSR"},w2[2]={"SRR","RRS"};
  string s; cin >> s;
  rep(i,4){
    if(s==w1[i]) cout << 1 << endl;
  }
  rep(i,2){
    if(s==w2[i]) cout << 2 << endl;
  }
  if(s=="SSS") cout << 0 << endl;
  if(s=="RRR") cout << 3 << endl;
  return 0;
}