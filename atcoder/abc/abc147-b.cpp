#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ss=s.size();
  int cnt=0;
  rep(i,ss/2){
    if(s[i]!=s[ss-1-i]) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}