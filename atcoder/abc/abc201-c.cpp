#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int num=0;
  rep(i,10000){
    string ch;
    if(i<10) ch="000"+to_string(i);
    else if(i<100) ch="00"+to_string(i);
    else if(i<1000) ch="0"+to_string(i);
    else ch=to_string(i);
    bool ans=true;
    rep(j,10){
      if(s[j]=='o'){
        int cnt=0;
        rep(k,4){
          if(ch[k]-'0'==j) ++cnt;
        }
        if(cnt==0){ans=false; break;}
      }
      rep(l,4){
        if(s[ch[l]-'0']=='x'){ans=false; break;}
      }
    }
    if(ans){cerr<<i<<" "<<ch<<endl; ++num;}
  }
  cout << num << endl;
  return 0;
}