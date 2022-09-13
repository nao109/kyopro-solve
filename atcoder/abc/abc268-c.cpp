#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> p(n);
  for(int i=0; i<n; ++i) cin >> p[i];
  
  vector<int> cnt(n);
  for(int i=0; i<n; ++i){
    int d=(p[i]-i-1+n)%n;
    cnt[d%n]++;
    cnt[(d+1)%n]++;
    cnt[(d+2)%n]++;
  }
  
  int ma=0;
  for(int i=0; i<n; ++i){
    ma=max(cnt[i],ma);
  }
  cout << ma << endl;
  return 0;
}