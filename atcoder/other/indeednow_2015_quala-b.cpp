#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  string indeed="indeednow"; sort(indeed.begin(),indeed.end());
  rep(i,n){
    string s; cin >> s;
    sort(s.begin(),s.end());
    if(s==indeed) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}