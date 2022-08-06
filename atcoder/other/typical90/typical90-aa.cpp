#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  set<string> name;
  for(int i=0; i<n; ++i){
    string s;
    cin >> s;
    if(!name.count(s)){
      cout << i+1 << endl;
      name.insert(s);
    }
  }
  return 0;
}