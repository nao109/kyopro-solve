#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> s(n),t(n);
  for(int i=0; i<n; ++i) cin >> s[i];
  for(int i=0; i<n; ++i) cin >> t[i];
  for(int i=1; i<n; ++i){
    t[i]=min(t[i-1]+s[i-1],t[i]);
  }
  for(int i=0; i<n; ++i) cout << t[i] << endl;
  return 0;
}