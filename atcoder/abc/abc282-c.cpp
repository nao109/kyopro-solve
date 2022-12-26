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

  bool flag=true;
  for(int i=0; i<n; ++i){
    if(s[i]=='"') flag=!flag;
    if(s[i]==',' && flag) s[i]='.';
  }
  cout << s << endl;
  return 0;
}