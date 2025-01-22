	#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<pair<pair<string,int>,int>> spi(n);
  for(int i=0; i<n; ++i){
    cin >> spi[i].fi.fi >> spi[i].fi.se;
    spi[i].fi.se*=-1;
    spi[i].se=i+1;
  }
  sort(all(spi));
  for(int i=0; i<n; ++i){
    cout << spi[i].se << endl;
  }
  return 0;
}