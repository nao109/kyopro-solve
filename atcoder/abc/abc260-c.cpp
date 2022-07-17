#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,x,y;
  cin >> n >> x >> y;
  if(n==1) cout << "0\n";
  else{
    vector<ll> red(n,0),blue(n,0);
    red[0]=1,blue[0]=x;
    for(int i=1; i<n; ++i){
      red[i]=blue[i-1]+red[i-1];
      blue[i]=blue[i-1]*y;
      if(i<n-1) blue[i]+=red[i]*x;
    }
    cout << blue[n-1] << endl;
  }
  return 0;
}