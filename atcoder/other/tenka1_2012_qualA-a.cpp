#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  ll n; cin >> n;
  if(n==0){cout << 1 << endl; return 0;}
  vector<ll> num(45); num[0]=0; num[1]=1;
  rep(i,43) num[i+2]=num[i+1]+num[i];
  rep(i,44) num[i+1]+=num[i];
  rep(i,45) ++num[i];
  rep(i,45) cerr << num[i] << endl;
  cout << num[n-1] << endl;
  return 0;
}