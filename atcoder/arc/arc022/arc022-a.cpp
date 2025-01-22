#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  string s;
  cin >> s;
  int n=s.size();
  vector<bool> ict(3,false);
  for(int i=0; i<n; ++i){
    if(!ict[0]){
      if(s[i]=='i' || s[i]=='I') ict[0]=true;
    }
    else if(!ict[1]){
      if(s[i]=='c' || s[i]=='C') ict[1]=true;
    }
    else{
      if(s[i]=='t' || s[i]=='T') ict[2]=true;
    }
  }
  if(ict[0] && ict[1] && ict[2]) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}