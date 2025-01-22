#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int &i:a) cin >> i;
  vector<int> b;
  for(int i=0; i<n; ++i){
    b.push_back(1);
    for(int j=0; j<a[i]-1; ++j){
      b.push_back(0);
    }
    if(i==n-1){
      b.push_back(0);
    }
  }
  int bs=b.size();
  int ans=0;
  for(int i=0; i<min(bs-4,bs); ++i){
    ans+=b[i];
  }
  cout << ans << endl;
  return 0;
}