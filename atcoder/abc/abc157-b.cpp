#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int a[3][3]; rep(i,3)rep(j,3) cin >> a[i][j];
  int ch[3][3]={};
  int n; cin >> n;
  rep(i,n){
    int b; cin >> b;
    rep(i,3)rep(j,3){
      if(a[i][j]==b) ch[i][j]=true;
    }
  }

  rep(i,3){
    rep(j,3){
      cerr << ch[i][j];
      if(j<2) cerr << " ";
      else cerr << endl;
    }
  }
  bool ans;
  rep(i,3){
    ans=true;
    rep(j,3){
      if(!ch[i][j]){ans=false; break;}
    }
    if(ans){cout << "Yes\n"; return 0;}
  }
  rep(j,3){
    ans=true;
    rep(i,3){
      if(!ch[i][j]){ans=false; break;}
    }
    if(ans){cout << "Yes\n"; return 0;}
  }
  if(ch[0][0]&&ch[1][1]&&ch[2][2]){cout << "Yes\n"; return 0;}
  if(ch[0][2]&&ch[1][1]&&ch[2][0]){cout << "Yes\n"; return 0;}
  cout << "No\n";
  return 0;
}