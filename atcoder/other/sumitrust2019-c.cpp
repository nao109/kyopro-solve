#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int x;
  cin >> x;
  bool buy=false;
  for(int i=1; i<1000000; ++i){
    if(100*i<=x && x<=105*i){
      buy=true;
      break;
    }
  }
  cout << (buy ? 1 : 0) << endl;
  return 0;
}