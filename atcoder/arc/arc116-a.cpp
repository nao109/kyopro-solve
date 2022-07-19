#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll t,n;
  cin >> t;
  for(int i=0; i<t; ++i){
    cin >> n;
    if(n%4==0) cout << "Even\n";
    else if(n%4==2) cout << "Same\n";
    else cout << "Odd\n";
  }
  return 0;
}