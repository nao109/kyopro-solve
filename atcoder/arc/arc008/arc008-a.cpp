#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int ans=(n/10)*100+(n%10)*15;
  int ch=((n+9)/10)*100;
  cout << min(ans,ch) << endl;
  return 0;
}