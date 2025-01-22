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
  for(int &i:a) cin >> i;
  int score=0;
  for(int i=0; i<n; ++i){
    if(i>=k) cout << (a[i-k]<a[i] ? "Yes\n" : "No\n");
  }
  return 0;
}