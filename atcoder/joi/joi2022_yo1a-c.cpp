#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  string s; cin >> s;
  vector<int> ch(5,0);
  rep(i,n){
    int diff=s[i]-'A';
    cout << diff << endl;
    ++ch[diff];
  }
  sort(ch.begin(),ch.end());
  if(ch[2]>0) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}