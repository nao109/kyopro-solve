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
  int n; cin >> n;
  if(n==1){
    int a,b; cin >> a >> b;
    if(a>b) cout << "2\n";
    else cout << "1\n";
    return 0;
  }
  queue<pair<int,int>> a;
  rep(i,pow(2,n-1)){
    int c,d; cin >> c >> d;
    if(c<d) a.push({d,2*i+2});
    else a.push({c,2*i+1});
  }
  while(n>2){
    --n;
    rep(i,pow(2,n-1)){
      pair<int,int> c,d; 
      c=a.front(); a.pop(); d=a.front(); a.pop();
      a.push(c>d?c:d);
    }
  }
  pair<int,int> c=a.front(); a.pop();
  pair<int,int> d=a.front(); a.pop();
  if(c<d) cout << c.se << endl;
  else cout << d.se << endl;
  return 0;
}