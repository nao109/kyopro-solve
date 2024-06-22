#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  string ans;
  for(int i=0; i<10; i++){
    ans+=(n%2==0 ? "0" : "1");
    n/=2;
  }
  reverse(all(ans));
  cout << ans << endl;
  return 0;
}