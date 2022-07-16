#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> cnt(100001,0);
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    ++cnt[a];
  }
  int ma=0;
  for(int i=1; i<100000; ++i){
    ma=max(cnt[i-1]+cnt[i]+cnt[i+1],ma);
  }
  cout << ma << endl;
  return 0;
}