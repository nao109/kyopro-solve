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
  int n=s.size();
  if(n%2==1) cout << "No\n";
  else{
    bool ans=false;
    rep(i,n){
      if(i%2==0&&s[i]!='h') ans=true;
      else if(i%2==1&&s[i]!='i') ans=true;
    }
    if(!ans) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}