#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  string t="atcoder";
  for(int i=0; i<7; ++i)for(int j=0; j<7; ++j){
    if(s[i]==t[j]) s[i]='1'+j;
  }

  int ans=0;
  while(true){
    bool flag=true;
    for(int i=0; i<6; ++i){
      if(s[i]>s[i+1]){
        flag=false;
        swap(s[i],s[i+1]);
        ans++;
      }
    }
    if(flag) break;
  }

  cout << ans << endl;
  return 0;
}