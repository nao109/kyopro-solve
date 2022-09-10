#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a[5];
  for(int i=0; i<5; ++i) cin >> a[i];
  sort(a,a+5);
  int ans=1;
  for(int i=0; i<4; ++i){
    if(a[i]<a[i+1]) ++ans;
  }
  cout << ans << endl;
  return 0;
}