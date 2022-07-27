#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> r(9,0);
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    a=min(a/400,8);
    ++r[a];
  }
  ll color=0;
  for(int i=0; i<8; ++i) color+=min(r[i],1);
  cout << color << " " << color+r[8] << endl;
  return 0;
}