#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  string s; cin >> s;
  int s1=stoi(s.substr(0,2)),s2=stoi(s.substr(2,2));
  cerr << s1 << " " << s2 << endl;
  string ans;
  if(1<=s1&&s1<=12){
    if(1<=s2&&s2<=12) ans="AMBIGUOUS";
    else ans="MMYY";
  }
  else{
    if(1<=s2&&s2<=12) ans="YYMM";
    else ans="NA\n";
  }
  cout << ans << endl;
  return 0;
}