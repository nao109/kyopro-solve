#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  vector<int> a(26,0);
  rep(i,4){
    ++a[s[i]-'A'];
  }
  sort(a.begin(),a.end());
  if(a[24]==2&&a[25]==2) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}