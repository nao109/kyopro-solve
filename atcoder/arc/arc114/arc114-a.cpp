#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> x(n);
  for(int i=0; i<n; ++i) cin >> x[i];
  
  set<int> prime;
  for(int i:x){
    bool isPrime=true;
    for(int j=2; j*j<=i; ++j){
      if(i%j==0) isPrime=false;
    }
    if(isPrime) prime.insert(i);
  }

  for(int &i:x){
    for(int j:prime){
      if(i%j==0) continue;
      for(int k=2; k*k<=i; ++k){
        if(i%k==0 && !prime.count(k)) prime.insert(k);
      }
    }
  }

  ll ans=1;
  for(int i:prime) ans*=i;
  cout << ans << endl;
  return 0;
}