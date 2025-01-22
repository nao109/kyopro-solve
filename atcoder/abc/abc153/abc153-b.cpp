#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int h,n; cin >> h >> n;
  int sum=0;
  rep(i,n){
    int a; cin >> a;
    sum+=a;
  }
  if(h<=sum) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}