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
  int a,b,c,d,e,f,x; cin >> a >> b >> c >> d >> e >> f >> x;
  int taka=(x/(a+c))*a*b,ao=(x/(d+f))*d*e;
  int tt=x%(a+c),at=x%(d+f);
  taka+=(min(a,tt))*b; ao+=(min(d,at))*e;
  if(taka<ao) cout << "Aoki\n";
  else if(taka>ao) cout << "Takahashi\n";
  else cout << "Draw\n";
  return 0;
}