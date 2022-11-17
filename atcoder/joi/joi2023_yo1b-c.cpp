#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  string s;
  cin >> n >> s;
  for(int i=0; i<n/2; ++i){
    if(s[i]!=s[i+n/2]){
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}