#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,x;
  cin >> n >> x;
  string s;
  for(int i=0; i<26; ++i){
    for(int j=0; j<n; ++j){
      s+='A'+i;
    }
  }
  cout << s[x-1] << endl;
  return 0;
}