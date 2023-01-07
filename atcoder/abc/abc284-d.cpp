#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; ++i){
    ll n;
    cin >> n;
    ll p=-1,q=-1;

    for(ll i=2; i*i<n; ++i){
      if(n%i==0){
        n/=i;
        if(n%i==0) p=i,q=n/i;
        else q=i,p=sqrt(n);
        break;
      }
    }
    
    cout << p << " " << q << endl;
  }
  return 0;
}