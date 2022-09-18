#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  vector<string> s(10);
  vector<int> ab,cd;
  for(int i=0; i<10; ++i){
    for(int j=0; j<10; ++j){
      if(s[i][j]=='#'){
        ab.push_back(i+1);
        cd.push_back(j+1);
      }
    }
  }
  cout << ab[0] << " " << ab.back() << "\n" << cd[0] << " " << cd.back() << "\n";
  return 0;
}