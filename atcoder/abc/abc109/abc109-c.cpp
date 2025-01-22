#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n,x;
  cin >> n >> x;
  vector<int> d(n);
  for(int i=0; i<n; ++i){
    cin >> d[i];
    d[i]=abs(d[i]-x);
  }
  int ans=d[0];
  if(n==1){
    ans=d[0];
  }
  else{
    for(int i=1; i<n; ++i){
      ans=gcd(d[i],ans);
    }
  }
  cout << ans << endl;
  return 0;
}