#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  vector<string> s;
  for(int i=1; i<=1000; ++i){
    s.push_back(to_string(i));
  }
  sort(all(s));
  for(string &i:s) cout << i << endl;
  return 0;
}