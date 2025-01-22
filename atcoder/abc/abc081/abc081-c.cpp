#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k;
  cin >> n >> k;
  map<int,int> c;
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    if(c.count(a)) c[a]++;
    else c[a]=1;
  }

  vector<int> num;
  for(auto i:c) num.push_back(i.se);
  sort(all(num));
  int d=num.size()-k;
  int ans=0;
  for(int i=0; i<d; ++i) ans+=num[i];
  cout << ans << endl;
  return 0;
}