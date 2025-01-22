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
  int n,k; cin >> n >> k;
  double c=0;
  priority_queue<double, vector<double>, greater<double>> r;
  rep(i,n){double a; cin >> a; r.push(a);}
  rep(i,n-k) r.pop();
  rep(i,k){c=(c+r.top())/2; r.pop();}
  cout << c << endl;
  return 0;
}