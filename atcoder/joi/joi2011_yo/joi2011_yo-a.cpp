#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int t=0,n;
  for(int i=0; i<4; ++i){
    cin >> n; t+=n;
  }
  cout << t/60 << "\n" << t%60 << "\n";
  return 0;
}