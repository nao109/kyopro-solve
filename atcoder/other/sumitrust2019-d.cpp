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
  set<string> cnt;
  for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
      for(int k=j+1; k<n; ++k){
        string str;
        str=s[i];
        str+=s[j];
        str+=s[k];
        if(!cnt.count(str)) cnt.insert(str);
        else continue;
      }
    }
  }
  cout << cnt.size() << endl;
  return 0;
}