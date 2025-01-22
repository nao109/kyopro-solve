#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<bool>> together(n,vector<bool>(n,false));
  for(int i=0; i<n; ++i) together[i][i]=true;
  for(int i=0; i<m; ++i){
    int k;
    cin >> k;
    vector<int> dance(k);
    for(int j=0; j<k; ++j){
      cin >> dance[j];
      dance[j]--;
    }
    for(int l=0; l<k; ++l)for(int m=l+1; m<k; ++m){
      together[dance[l]][dance[m]]=true;
    }
  }
  bool flag=true;
  for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
      if(!together[i][j]) flag=false;
    }
  }
  cout << (flag ? "Yes\n" : "No\n");
  return 0;
}