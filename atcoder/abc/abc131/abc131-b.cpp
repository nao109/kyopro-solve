#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(10);
  int n,l; cin >> n >> l;
  vector<int> taste(n);
  int ans=500,sum=0;
  rep(i,n){
    taste[i]=l+(i+1)-1;
    sum+=taste[i];
    if(abs(ans)>abs(taste[i])) ans=taste[i];
  }
  cout << sum-ans << endl;
  return 0;
}