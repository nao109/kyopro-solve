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
  ll a,b,k; cin >> a >> b >> k;
  if(k<a) a-=k;
  else{
    k-=a; a=0;
    if(k<b) b-=k;
    else{
      k-=b; b=0;
    }
  }
  cout << a << " " << b << endl;
  return 0;
}