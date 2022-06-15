#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> x(n),y(n);
  for(int i=0; i<n; ++i) cin >> x[i] >> y[i];
  int ans=false;
  for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
      for(int k=j+1; k<n; ++k){
        if((x[j]-x[i])*(y[k]-y[i])==(x[k]-x[i])*(y[j]-y[i])){
          ans=true;
        }
      }
    }
  }
  cout << (ans ? "Yes\n" : "No\n");
  return 0;
}