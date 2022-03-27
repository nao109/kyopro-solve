#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  vector<string> s(15);
  rep(i,15) cin >> s[i];
  sort(s.begin(),s.end());
  cout << s[6] << endl;
  return 0;
}