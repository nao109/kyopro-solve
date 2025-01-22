#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  int sum=n*(n+1)/2;
  bool ans=true;
  for(int i=2; i*i<=sum; ++i){
    if(sum%i==0){
      ans=false;
      break;
    }
  }
  if(ans && sum!=1) cout << "WANWAN\n";
  else cout << "BOWWOW\n";
  return 0;
}