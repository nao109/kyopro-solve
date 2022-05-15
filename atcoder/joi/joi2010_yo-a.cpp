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
  int s; cin >> s;
  rep(i,9){
    int n; cin >> n; s-=n;
  }
  cout << s << endl;
  return 0;
}