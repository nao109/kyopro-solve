#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,q;
  string s;
  cin >> n >> s >> q;
  bool flip=false;
  for(int i=0; i<q; ++i){
    int t,a,b;
    cin >> t >> a >> b;
    if(t==1){
      if(flip){
        a+=(a<=n ? n : -n);
        b+=(b<=n ? n : -n);
      }
      swap(s[a-1],s[b-1]);
    }
    else flip=!flip;
  }
  if(flip) cout << s.substr(n)+s.substr(0,n) << endl;
  else cout << s << endl;
  return 0;
}