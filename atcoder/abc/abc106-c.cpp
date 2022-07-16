#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  ll k;
  cin >> s >> k;
  ll ss=s.size();
  int ans=1;
  for(int i=0; i<min(k,ss); ++i){
    if(s[i]-'0'>1){
      ans=s[i]-'0';
      break;
    }
  }
  cout << ans << endl;
  return 0;
}