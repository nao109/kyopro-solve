#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int cnt=0;
  rep(i,n){
    string s; cin >> s;
    if(s=="TAKAHASHIKUN"||s=="Takahashikun"||s=="takahashikun") ++cnt;
    if(i==n-1){
      if(s=="TAKAHASHIKUN."||s=="Takahashikun."||s=="takahashikun.") ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}