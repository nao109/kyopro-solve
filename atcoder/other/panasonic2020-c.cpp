#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  double a,b,c;
  cin >> a >> b >> c;
  double diff=c-a-b;
  if(diff<=2) cout << "No\n";
  else{
    if(diff>sqrt(a*b)*2) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}