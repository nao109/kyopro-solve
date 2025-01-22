#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  map<int,int> cnt;
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    if(cnt.count(a)) ++cnt[a];
    else cnt[a]=1;
  }
  int mi=n,ma=0;
  if(cnt.size()<m) mi=0;
  for(auto &i:cnt){
    ma=max(i.se,ma);
    mi=min(i.se,mi);
  }
  cout << mi << endl;
  cout << ma << endl;
  return 0;
}