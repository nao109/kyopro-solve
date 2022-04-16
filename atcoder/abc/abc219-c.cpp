#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);

  vector<pair<char,char>> ch(26);
  rep(i,26){ch[i].fi='a'+i; cin >> ch[i].se;}

  int n; cin >> n;
  vector<string> s(n); rep(i,n) cin >> s[i];
  
  rep(i,n){
    int ss=s[i].size();
    rep(j,ss){
      s[i][j]=ch[s[i][j]-'a'].se;
    }
  }
  sort(s.begin(),s.end());
  
  rep(i,52){
    if(i<26) cerr << ch[i].fi;
    else if(i<52) cerr << ch[i].se;
    if((i+1)%26==0) cerr << endl;
  }

  rep(i,26) swap(ch[i].fi,ch[i].se);
  sort(ch.begin(),ch.end());
  
  rep(i,52){
    if(i<26) cerr << ch[i].fi;
    else if(i<52) cerr << ch[i].se;
    if((i+1)%26==0) cerr << endl;
  }
  
  rep(i,n){
    int ss=s[i].size();
    rep(j,ss){
      s[i][j]=ch[s[i][j]-'a'].se;
    }
  }
  rep(i,n) cout << s[i] << endl;
  return 0;
}