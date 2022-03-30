#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  vector<string> s(26); string t;
  cin >> s[0] >> t;
  int ss=s[0].size();
  for(int i=1; i<26; i++){
    for(int j=0; j<ss; ++j){
      s[i].pb((s[i-1][j]+1-'a')%26+'a');
    }
  }
  rep(i,26){
    cerr << s[i] << endl;
    if(s[i]==t){cout << "Yes\n"; return 0;}
  }
  cout << "No\n";
  return 0;
}