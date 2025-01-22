#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  double sum=0;
  rep(i,n){
    double x; string u;
    cin >> x >> u;
    if(u=="JPY") sum+=x;
    else sum+=x*380000.0;
  }
  cout << sum << endl;
  return 0;
}