#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  queue<char> qs;
  int n=s.size();
  for(int i=0; i<n; ++i) qs.push(s[i]);
  
  int ans=0,flag=-1;
  while(!qs.empty()){
    if(qs.front()!='0'){
      qs.pop();
      ans++;
    }
    else{
      qs.pop();
      ans++;
      if(!qs.empty()){
        if(qs.front()=='0') qs.pop();
      }
    }
  }
  cout << ans << endl;
  return 0;
}