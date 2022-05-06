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
  int a,b,ab,x,y; cin >> a >> b >> ab >> x >> y;
  int sum=0,num=min(x,y);
  if(a+b>=ab*2) sum=ab*2*num;
  else sum=(a+b)*min(x,y);
  x-=num; y-=num;
  if(x>0) sum+=min(ab*2,a)*x;
  else sum+=min(ab*2,b)*y;
  cout << sum << endl;
  return 0;
}