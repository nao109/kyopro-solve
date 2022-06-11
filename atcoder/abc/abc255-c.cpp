#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll x,a,d,n;
  cin >> x >> a >> d >> n;
  if(d>0){
    if(x<=a) cout << a-x << endl;
    else if(a+d*(n-1)<=x) cout << x-(a+d*(n-1)) << endl;
    else{
      ll sub1=(x-a)/d,sub2=(x-a+d-1)/d;
      cout << abs(min(x-(a+d*(sub1-1)),(a+d*(sub2-1))-x)) << endl;
    }
  }
  else if(d<0){
    if(x>=a) cout << x-a << endl;
    else if(a+d*(n-1)>=x) cout << (a+d*(n-1))-x << endl;
    else{
      ll sub1=(x-a)/d,sub2=(x-a+d-1)/d;
      cout << min((a+d*(sub1-1))-x,x-(a+d*(sub2-1))) << endl;
    }
  }
  else{
    cout << abs(x-a) << endl;
  }
  return 0;
}