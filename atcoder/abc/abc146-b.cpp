#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; string s;
  cin >> n >> s;
  int ss=s.size();
  rep(i,ss){
    s[i]=(s[i]-'A'+n)%26+'A';
  }
  cout << s << endl;
  return 0;
}