#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  set<string> s;
  for(int i=0; i<n; ++i){
    string t;
    cin >> t;
    s.insert(t);
  }
  for(string i:s){
    if(s.count("!"+i)){
      cout << i << endl;
      return 0;
    }
  }
  cout << "satisfiable\n";
  return 0;
}