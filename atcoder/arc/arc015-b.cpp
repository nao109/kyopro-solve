#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> cnt(6,0);
  for(int i=0; i<n; ++i){
    double ma,mi;
    cin >> ma >> mi;
    if(35<=ma) ++cnt[0];
    else if(30<=ma) ++cnt[1];
    else if(25<=ma) ++cnt[2];
    if(25<=mi) ++cnt[3];
    if(mi<0 && 0<=ma) ++cnt[4];
    if(ma<0) ++cnt[5];
  }
  for(int i=0; i<6; ++i) cout << cnt[i] << (i<5 ? " " : "\n");
  return 0;
}