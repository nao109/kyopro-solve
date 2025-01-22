#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; int n;
  cin >> s >> n;
  int l,r;
  rep(i,n){
    cin >> l >> r;
    reverse(s.begin()+l-1,s.begin()+r);
  }
  cout << s << endl;
  return 0;
}