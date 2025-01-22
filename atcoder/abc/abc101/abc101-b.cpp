#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int sum(int n){
  int sum=0;
  while(n>0){
    sum+=n%10; n/=10;
  }
  return sum;
}

int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  if(n%sum(n)==0) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}