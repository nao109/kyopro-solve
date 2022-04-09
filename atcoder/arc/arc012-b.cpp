#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n; double va,vb,l; cin >> n >> va >> vb >> l;
  rep(i,n) l*=vb/va;
  cout << l << endl;
  return 0;
}