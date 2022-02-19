#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int sum(int i){
  int ch=0;
  while(i>0){
    ch+=i%10; i/=10;
  }
  return ch;
}
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int ch=0;
  if(n%sum(n)==0) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}