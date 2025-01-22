#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back

ll f(ll n){
  if(n==1) return 1;
  else return n*f(n-1);
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back

ll f(ll n){
  if(n==1) return 1;
  else return n*f(n-1);
}

int main(){
  cout << fixed << setprecision(7);
  ll p; cin >> p;
  vector<ll> fac(10,1);
  rep(i,10) fac[i]=f(i+1);
  //rep(i,10) cerr << fac[i] << "\n";
  ll cnt=0,ch=9;
  while(p>0){   
    if(p/fac[ch]<=100){
      cnt+=p/fac[ch];
      p=p%fac[ch];
    }
    --ch;
  }
  cout << cnt << "\n";
  return 0;
}
int main(){
  cout << fixed << setprecision(7);
  ll p; cin >> p;
  vector<ll> fac(10,1);
  rep(i,10) fac[i]=f(i+1);
  //rep(i,10) cerr << fac[i] << "\n";
  ll cnt=0,ch=9;
  while(p>0){   
    if(p/fac[ch]<=100){
      cnt+=p/fac[ch];
      p=p%fac[ch];
    }
    --ch;
  }
  cout << cnt << "\n";
  return 0;
}