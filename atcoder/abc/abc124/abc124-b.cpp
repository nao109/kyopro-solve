#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> h(n); rep(i,n) cin >> h[i];
  int sum=1;
  for(int i=1; i<n; ++i){
    int ch=0;
    for(int j=0; j<i; ++j){
      if(h[j]<=h[i]) ++ch;
    }
    if(ch==i) ++sum;
  }
  cout << sum << endl;
  return 0;
}