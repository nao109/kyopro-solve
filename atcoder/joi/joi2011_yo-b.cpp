#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string t; int n,ans=0;
  cin >> t >> n;
  int ts=t.size();
  for(int i=0; i<n; ++i){
    string s;
    cin >> s;
    s+=s;
    for(int i=0; i<20-ts+1; ++i){
      cerr << s.substr(i,ts) << endl;
      if(s.substr(i,ts)==t){
        ++ans;
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}