#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  int ans=0;
  if(a.size()==1){
    if(a[0]==1) ans=1;
  }
  else{
    sort(all(a));
    deque<int> b;
    int cnt=0;
    for(int i=0; i<n; ++i){
      if(b.empty()) b.push_back(a[i]);
      else if(b.back()<a[i]) b.push_back(a[i]);
      else cnt++;
    }
    while(cnt>0) cnt--,b.push_back(1000000001);
    int i=1;
    while(!b.empty()){
      if(i==b.front()) ans++,i++,b.pop_front();
      else if(b.size()>1){
        b.pop_back();
        b.pop_back();
        ans++,i++;
      }
      else break;
    }
  }
  cout << ans << endl;
  return 0;
}