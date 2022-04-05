#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,m; cin >> n >> m;
  int b[n][m]; rep(i,n)rep(j,m) cin >> b[i][j];
  bool flag=true;
  rep(i,n)rep(j,m){
    if(j<m-1){
      if(b[0][j+1]!=b[0][j]+1) flag=false;
    }
  }
  
  /*int l=b[0][0]%7;
  if(l==0){cout << "No\n"; return 0;}
  rep(i,7){
    if(n==i+1&&l>7-i){cout << "No\n"; return 0;}
  }*/
  int l=(b[0][0]-1)%7+1,r=(b[0][m-1]-1)%7+1;
  cerr << l << " " << r << endl;
  if(l<1||r>7||r<l) flag=false;

  rep(i,n-1){
    if(b[i+1][0]!=b[i][0]+7) flag=false;
  }

  if(flag) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}