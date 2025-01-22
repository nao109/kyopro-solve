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
  vector<string> t(2);
  for(int i=0; i<n; ++i){
    t[0]+=to_string(i%2);
    t[1]+=to_string((i+1)%2);
  }
  int ans1=0,ans2=0;
  for(int i=0; i<n; ++i){
    if(s[i]!=t[0][i]) ++ans1;
    if(s[i]!=t[1][i]) ++ans2;
  }
  cout << min(ans1,ans2) << endl;
  return 0;
}