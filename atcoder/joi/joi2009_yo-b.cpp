#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  vector<int> a(10),b(10);
  rep(i,10) cin >> a[i]; rep(i,10) cin >> b[i];
  sort(all(a)); sort(all(b));
  int sa=a[9]+a[8]+a[7],sb=b[9]+b[8]+b[7];
  cout << sa << " " << sb << endl;
  return 0;
}