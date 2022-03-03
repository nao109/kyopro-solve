#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string s; int a,b; cin >> s >> a >> b;
  swap(s[a-1],s[b-1]);
  cout << s << endl;
  return 0;
}