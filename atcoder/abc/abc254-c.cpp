#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  bool flag=false;
  for(int i=0; i<n-k; ++i){
    if(a[i]>a[i+k]){
      swap(a[i],a[i+k]);
      flag=true;
    }
  }
  if(n>2*k || k==1) cout << "Yes\n";
  else{
    flag=false;
    for(int i=0; i<n-1; ++i){
      if(a[i]>a[i+1]) flag=true;
    }
    cout << (!flag ? "Yes\n" : "No\n");
  }
  return 0;
}