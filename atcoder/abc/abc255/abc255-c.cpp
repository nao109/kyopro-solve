#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll x,a,d,n;
  cin >> x >> a >> d >> n;
  if(d<0){
    a=a+d*(n-1);
    d*=-1;
  }  
  if(d==0) cout << abs(x-a) << endl;
  else{
    if(x<=a) cout << a-x << endl;
    else if(a+d*(n-1)<=x) cout << x-(a+d*(n-1)) << endl;
    else{
      ll sub=(x-a)%d;
      cout << min(sub,d-sub) << endl;
    }
  }
  return 0;
}