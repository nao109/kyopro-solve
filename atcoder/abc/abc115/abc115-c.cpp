#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n,k;
  cin >> n >> k;
  vector<int> h(n);
  for(int i=0; i<n; ++i) cin >> h[i];
  int diff=1000000000;
  sort(all(h));
  for(int i=0; i<n-k+1; ++i){
    diff=min(h[i+k-1]-h[i],diff);
  }
  cout << diff << endl;
  return 0;
}