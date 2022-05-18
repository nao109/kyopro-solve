#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n;
  cin >> n;
  int ans=n;
  for(int i=0; i<n; ++i){
    int s; cin >> s;
    bool flag=false;
    for(int a=1; a<=s; ++a){
      for(int b=1; b<=s; ++b){
        if(4*a*b+3*a+3*b==s)flag=true;
      }
    }
    if(flag) --ans;
  }
  cout << ans << endl;
  return 0;
}