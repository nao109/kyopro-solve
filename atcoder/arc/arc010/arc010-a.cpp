#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n,m,a,b; cin >> n >> m >> a >> b;
  int sum=n,day=1;
  bool flag=true;
  rep(i,m){
    if(sum<=a) sum+=b;
    int c; cin >> c;
    sum-=c;
    if(sum<0){flag=false; day=i+1; break;}
    cerr << sum << endl;
  }
  if(flag) cout << "complete\n";
  else cout << day << "\n";
  return 0;
}