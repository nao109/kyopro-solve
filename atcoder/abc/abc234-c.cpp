#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  ll k; cin >> k;
  string s;
  while(k>0){
    s+=to_string((k%2)*2); k/=2;
  }
  reverse(all(s));
  cout << s << endl;
  return 0;
}