#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> cnt(5,0);
  for(int i=0; i<n; ++i){
    string s;
    cin >> s;
    if(s[0]=='M') ++cnt[0];
    else if(s[0]=='A') ++cnt[1];
    else if(s[0]=='R') ++cnt[2];
    else if(s[0]=='C') ++cnt[3];
    else if(s[0]=='H') ++cnt[4];
  }
  ll ans=0;
  for(int i=0; i<5; ++i){
    for(int j=0; j<5; ++j){
      for(int k=0; k<5; ++k){
        if(i<j && j<k) ans+=cnt[i]*cnt[j]*cnt[k];
      }
    }
  }
  cout << ans << endl;
  return 0;
}