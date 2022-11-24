#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  string ans;
  while(n>0){
    ans.push_back('a'+(n-1)%26);
    n=(n-1)/26;
  }
  reverse(all(ans));
  cout << ans << endl;
  return 0;
}