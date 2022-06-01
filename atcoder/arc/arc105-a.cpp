#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if(a+b==c+d || a+c==b+d || a+d==b+c){
    cout << "Yes\n";
  }
  else if(a==b+c+d || b==a+c+d || c== a+b+d || d==a+b+c){
    cout << "Yes\n";
  }
  else cout << "No\n";
  return 0;
}