#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  vector<string> v;
  string str,s;
  getline(cin,str);
  stringstream ss{str};
  while(getline(ss,s,' ')){
    if(s.size()>0) v.push_back(s);
  }
  int n=v.size();
  int cnt=0;
  for(string s:v){
    cout << s << (cnt<n-1 ? "," : "\n");
    ++cnt;
  }
  return 0;
}