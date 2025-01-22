#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>> vec;
  for(int bit=0; bit<1024; ++bit){
    vector<int> v;
    for(int i=0; i<10; ++i){
      if(bit & (1<<i)) v.push_back(i+1);
    }
    if(v.size()==n) vec.push_back(v);
  }
  sort(all(vec));
  for(int i=0; i<vec.size(); ++i){
    bool flag=true;
    for(int j=0; j<n; ++j){
      if(vec[i][j]>m) flag=false;
    }
    if(flag){
      for(int j=0; j<n; ++j){
        cout << vec[i][j];
        cout << (j<n-1 ? " " : "\n");
      }
    }
  }
  return 0;
}