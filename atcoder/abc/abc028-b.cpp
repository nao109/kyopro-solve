#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ss=s.size();
  vector<int> ch(6,0);
  rep(i,ss){
    if(s[i]=='A') ch[0]++;
    else if(s[i]=='B') ++ch[1];
    else if(s[i]=='C') ++ch[2];
    else if(s[i]=='D') ++ch[3];
    else if(s[i]=='E') ++ch[4];
    else if(s[i]=='F') ++ch[5];
  }
  rep(i,5) cout << ch[i] << " ";
  cout << ch[5] << "\n";
  return 0;
}