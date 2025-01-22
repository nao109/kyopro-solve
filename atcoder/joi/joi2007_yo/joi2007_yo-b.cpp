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
  set<int> num;
  rep(i,28){
    int n;
    cin >> n;
    num.insert(n);
  }
  rep(i,30){
    if(!num.count(i+1)){
      cout << i+1 << endl;
    }
  }
  return 0;
}