#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ",b="XYZABCDEFGHIJKLMNOPQRSTUVW";
  string s;
  cin >> s;
  int n=s.size();
  rep(i,n){
    s[i]=b[s[i]-'A'];
  }
  cout << s << endl;
  return 0;
}