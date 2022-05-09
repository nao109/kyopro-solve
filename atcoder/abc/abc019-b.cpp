#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  cout << fixed << setprecision(15);
  string s; cin >> s; int n=s.size();
  char c=s[0];
  int cnt=0;
  rep(i,n){
    if(s[i]==c) ++cnt;
    else{
      cout << c << cnt;
      cnt=1; c=s[i];
    }
  }
  cout << c << cnt << endl;
  return 0;
}