#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s; cin >> s;
  int n=s.size();
  int ma=0,cnt=0;
  for(int i=0; i<n; ++i){
    cerr << cnt << endl;
    if(s[i]=='A' || s[i]=='C' || s[i]=='G' || s[i]=='T') ++cnt;
    else{
      ma=max(cnt,ma);
      cnt=0;
    }
  }
  cout << max(cnt,ma) << endl;
  return 0;
}