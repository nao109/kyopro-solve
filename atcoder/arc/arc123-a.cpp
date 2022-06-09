#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a,b,c,cnt=0;
  cin >> a >> b >> c;
  c+=((c+a)%2==1);
  cnt+=((c+a)%2==1);
  cnt+= (b-(a+c)/2>=0 ? 2 : 1) * abs(b-(a+c)/2);
  cout << cnt << endl;
  return 0;
}