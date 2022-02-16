#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string w[3]={"Sunny","Cloudy","Rainy"};
  string s; cin >> s;
  rep(i,3){
    if(s==w[i]) cout << w[(i+1)%3] << endl;
  }
  return 0;
}