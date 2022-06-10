#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int mon[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  int m,d,M,D;
  cin >> m >> d >> M >> D;
  int ans=0;
  if(m==M) ans=D-d;
  else{
    ans+=mon[m-1]-d;
    for(int i=m+1; i<M; ++i) ans+=mon[i-1];
    ans+=D;
  }
  cout << ans << endl;
  return 0;
}