#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int n; cin >> n;
  vector<int> p(n); rep(i,n) cin >> p[i];
  sort(p.begin(),p.end());
  int sum=0;
  rep(i,n){
    if(i==n-1) sum+=p[i]/2;
    else sum+=p[i];
  }
  cout << sum << endl;
  return 0;
}