#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  string s;
  cin >> s;
  int ss=s.size();
  for(int i=0; i<6/ss; ++i){
    cout << s;
  }
  cout << endl;
  return 0;
}