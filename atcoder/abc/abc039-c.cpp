#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  vector<string> s(7),ans(7);
  s[0]="WBWBWWBWBWBWWBWBWWBW"; ans[0]="Do";
  s[1]="WBWWBWBWBWWBWBWWBWBW"; ans[1]="Re";
  s[2]="WWBWBWBWWBWBWWBWBWBW"; ans[2]="Mi";
  s[3]="WBWBWBWWBWBWWBWBWBWW"; ans[3]="Fa";
  s[4]="WBWBWWBWBWWBWBWBWWBW"; ans[4]="So";
  s[5]="WBWWBWBWWBWBWBWWBWBW"; ans[5]="La";
  s[6]="WWBWBWWBWBWBWWBWBWWB"; ans[6]="Si";
  string t; cin >> t;
  rep(i,7){
    if(t==s[i]) cout << ans[i] << endl;
  }
  return 0;
}