#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  int ch1=(n+8)/9,ch2=(n-1)%9+1;
  rep(i,ch1) cout << ch2;
  cout << endl;
  return 0;
}