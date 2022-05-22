#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n; string s;
  cin >> n >> s;
  char c=s[0];
  int cnt=0; string t;
  for(int i=0; i<n; ++i){
    if(s[i]!=c){
      t+=c; c=s[i];
    }
  }
  t+=c;
  cout << t.size() << endl;
  return 0;
}