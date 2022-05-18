#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n;
  cin >> n;
  vector<int> h(n);
  for(int i=0; i<n; ++i) cin >> h[i];
  reverse(all(h));
  for(int i=0; i<n-1; ++i){
    if(h[i]+2<=h[i+1]){
      cout << "No\n";
      return 0;
    }
    else if(h[i]+1==h[i+1]) --h[i+1];
  }
  cout << "Yes\n";
  return 0;
}