#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> cnt(n);
  for(int i=0; i<2*n-1; ++i){
    int a;
    cin >> a;
    cnt[a-1]++;
  }
  for(int i=0; i<n; ++i){
    if(cnt[i]==1) cout << i+1 << endl;
  }
  return 0;
}