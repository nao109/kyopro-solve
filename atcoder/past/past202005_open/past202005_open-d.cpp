#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<string> s(5);
  for(int i=0; i<5; ++i) cin >> s[i];
  for(int i=0; i<n; ++i){
    if(s[0].substr(4*i+1,3)=="###" && s[4].substr(4*i+1,3)=="###"){
      if(s[2].substr(4*i+1,3)=="###"){
        if(s[1].substr(4*i+1,3)=="..#" && s[3].substr(4*i+1,3)=="#..") cout << 2;
        if(s[1].substr(4*i+1,3)=="..#" && s[3].substr(4*i+1,3)=="..#") cout << 3;
        if(s[1].substr(4*i+1,3)=="#.." && s[3].substr(4*i+1,3)=="..#") cout << 5;
        if(s[1].substr(4*i+1,3)=="#.." && s[3].substr(4*i+1,3)=="#.#") cout << 6;
        if(s[1].substr(4*i+1,3)=="#.#" && s[3].substr(4*i+1,3)=="#.#") cout << 8;
        if(s[1].substr(4*i+1,3)=="#.#" && s[3].substr(4*i+1,3)=="..#") cout << 9;
      }
      else cout << 0;
    }
    else if(s[0].substr(4*i+1,3)==".#." && s[1].substr(4*i+1,3)=="##." && s[2].substr(4*i+1,3)==".#." && s[3].substr(4*i+1,3)==".#." && s[4].substr(4*i+1,3)=="###") cout << 1;
    else if(s[0].substr(4*i+1,3)=="#.#" && s[1].substr(4*i+1,3)=="#.#" && s[2].substr(4*i+1,3)=="###" && s[3].substr(4*i+1,3)=="..#" && s[4].substr(4*i+1,3)=="..#") cout << 4;
    else cout << 7;
  }
  cout << endl;
  return 0;
}