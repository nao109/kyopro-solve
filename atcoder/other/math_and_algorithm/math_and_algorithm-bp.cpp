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
  int cnt=0;
  bool flag=true;
  for(int i=0; i<n; i++){
    if(s[i]=='(') cnt++;
    else cnt--;
    if(cnt<0) flag=false;
  }
  if(flag && cnt==0) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}