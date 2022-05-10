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
  int a,b; cin >> a >> b;
  if(a%b){
    while(a>0){
      if(a%b==0) break;
      --a;
    }
  }
  cout << a << endl;
  return 0;
}