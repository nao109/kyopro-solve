#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> a(n,0); a[0]=0,a[1]=0,a[2]=1;
  vector<int> a(n,0); a[0]=0,a[1]=0,a[2]=1;
  if(n<=3){cout << a[n-1] << endl; return 0;}
  if(n>3){
    rep(i,n-4) a[i+3]=(a[i+2]+a[i+1]+a[i])%10007;
  }
  cout << a[n-1] << endl;
  return 0;
}