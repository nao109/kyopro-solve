#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n,a,b; cin >> n >> a >> b;
  while(n>0){
    n-=a;
    cerr << n << endl;
    if(n<=0){cout << "Ant\n"; return 0;}
    n-=b;
    cerr << n << endl;
    if(n<=0){cout << "Bug\n"; return 0;}
  }
  return 0;
}