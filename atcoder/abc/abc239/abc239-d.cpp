#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  vector<int> prime{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199};
  int a,b,c,d; cin >> a >> b >> c >> d;
  bool ans;
  for(int i=a; i<=b; ++i){
    ans=true;
    for(int j=c; j<=d; ++j){
      for(int k=0; k<46; ++k){
        if(i+j==prime[k]) ans=false;
        else continue;
      }
    }
    if(ans) break;
  }
  if(!ans) cout << "Aoki\n";
  else cout << "Takahashi\n";
  return 0;
}