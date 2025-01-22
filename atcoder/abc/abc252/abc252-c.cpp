#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n;
  cin >> n;
  vector<vector<int>> ch(10);
  for(int i=0; i<n; ++i){
    for(int j=0; j<10; ++j){
      char a; cin >> a;
      ch[a-'0'].push_back(j);
    }
  }
  for(int i=0; i<10; ++i){
    sort(all(ch[i]));
  }
  vector<int> t(10,0);
  for(int i=0; i<10; ++i){
    map<int,int> b;
    for(int j=0; j<n; ++j){
      b[ch[i][j]]=(b.count(ch[i][j])?b[ch[i][j]]+1:1);
    }
    for(auto j:b){
      t[i]=max((j.se-1)*10+j.fi,t[i]);
    }
  }
  sort(all(t));
  cout << t[0] << endl;
  return 0;
}