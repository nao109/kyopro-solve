#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n,k; string s;
  cin >> n >> k >> s;
  s[k-1]=s[k-1]-'A'+'a';
  cout << s << endl;
  return 0;
}