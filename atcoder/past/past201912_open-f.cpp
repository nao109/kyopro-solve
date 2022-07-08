#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  int n=s.size();
  vector<string> check(50000);
  int cnt=0;
  bool word=false;
  for(int i=0; i<n; ++i){
    if('A'<=s[i] && s[i]<='Z'){
      check[cnt].push_back(s[i]+32);
      if(word){
        cnt++;
      }
      word=!word;
    }
    else if(word) check[cnt].push_back(s[i]);
  }
  
  sort(all(check));
  for(string &i:check){
    if(!i.empty()){
      i.front()-=32;
      i.back()-=32;
      cout << i;
    }
  }
  cout << '\n';
  return 0;
}