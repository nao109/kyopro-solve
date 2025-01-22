#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  ll a,b; cin >> a >> b;
  ll cnt=0;
  if(a==0) cout << "Zero\n";
  else if(a>0) cout << "Positive\n";
  else{
    if(b>=0) cout << "Zero\n";
    else if((b-a+1)%2==0) cout << "Positive\n";
    else cout << "Negative\n";
  }
  return 0;
}