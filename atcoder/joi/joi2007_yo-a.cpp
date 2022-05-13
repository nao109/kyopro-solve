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
  int s=0,t=0;
  rep(i,4){
    int a;
    cin >> a;
    s+=a;
  }
  rep(i,4){
    int b;
    cin >> b;
    t+=b;
  }
  cout << max(s,t) << endl;
  return 0;
}