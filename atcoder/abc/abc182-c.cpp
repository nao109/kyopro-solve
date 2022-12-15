#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string n;
  cin >> n;
  int ns=n.size();

  int ans=0,sum=0;
  vector<int> cnt(3);
  for(int i=0; i<ns; ++i){
    sum+=n[i]-'0';
    cnt[(n[i]-'0')%3]++;
  }
  if(sum%3==0) ans=0;
  else if(sum%3==1){
    if(cnt[1]>0) ans=1,cnt[1]--;
    else ans=2,cnt[1]-=2;
  }
  else{
    if(cnt[2]>0) ans=1,cnt[2]--;
    else ans=2,cnt[1]-=2;
  }

  if(cnt[0]>0 || cnt[1]>0 || cnt[2]>0) cout << ans << endl;
  else cout << -1 << endl;
  return 0;
}