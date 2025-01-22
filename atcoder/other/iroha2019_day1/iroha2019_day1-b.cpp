#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s,ans;
  int k;
  cin >> s >> k;
  int ss=s.size();
  for(int i=0; i<ss; ++i) ans.push_back(s[(i+k)%ss]);
  cout << ans << endl;
  return 0;
}