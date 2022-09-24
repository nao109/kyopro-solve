#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  string s;
  cin >> n >> s;
  map<string,int> cnt;
  cnt[s.substr(1)]=1;
  for(int i=1; i<n; ++i){
    string t=s.substr(0,i)+s.substr(i+1);
    if(cnt.count(t)) cnt[t]++;
    else cnt[t]=1;
  }

  int ans=0;
  for(auto &i:cnt) ans+=i.se*(i.se-1)/2;
  cout << ans << endl;
  return 0;
}