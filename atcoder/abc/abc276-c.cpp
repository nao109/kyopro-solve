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
  prev_permutation(all(a));
  for(int i=0; i<n; ++i){
    cout << a[i] << (i<n-1 ? " " : "\n");
  }
  return 0;
}