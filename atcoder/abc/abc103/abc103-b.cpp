#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s,t;
  cin >> s >> t;

  int n=s.size();
  vector<string> ss(n);
  ss[0]=s;
  for(int i=1; i<n; ++i){
    int l=ss[i-1].size();
    ss[i]=ss[i-1].back()+ss[i-1].substr(0,l-1);
  }

  for(int i=0; i<n; ++i){
    if(ss[i]==t){
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}