#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  rep(i,12){
    cout << s[i];
    if(i==3) cout << " ";
  }
  cout << endl;
  return 0;
}