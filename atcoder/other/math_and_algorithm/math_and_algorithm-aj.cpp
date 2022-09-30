#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,q;
  cin >> n >> q;
  vector<int> a(n);
  for(int i=0; i<q; ++i){
    int l,r,x;
    cin >> l >> r >> x;
    --l,--r;
    a[l]+=x, a[r+1]-=x;
  }
  for(int i=1; i<n; ++i){
    if(a[i]>0) cout << "<";
    else if(a[i]==0) cout << "=";
    else cout << ">";
  }
  cout << "\n";
  return 0;
}