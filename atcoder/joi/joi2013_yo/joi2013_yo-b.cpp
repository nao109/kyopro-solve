#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n; cin >> n;
  vector<vector<int>> num(n,vector<int>(3));
  for(int i=0; i<n; ++i){
    for(int j=0; j<3; ++j){
      cin >> num[i][j];
    }
  }
  vector<int> p(n,0);
  for(int i=0; i<3; ++i){
    map<int,int> a;
    for(int j=0; j<n; ++j){
      if(a.count(num[j][i])) ++a[num[j][i]];
      else a[num[j][i]]=1;
    }
    for(int j=0; j<n; ++j){
      if(a[num[j][i]]==1) p[j]+=num[j][i];
    }
  }
  for(int i=0; i<n; ++i) cout << p[i] << endl;
  return 0;
}