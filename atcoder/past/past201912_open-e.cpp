#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,q;
  cin >> n >> q;
  vector<vector<bool>> f(n,vector<bool>(n,false));
  for(int i=0; i<q; ++i){
    int k,a;
    cin >> k >> a;
    if(k==1){
      int b;
      cin >> b;
      f[a-1][b-1]=true;
    }
    else if(k==2){
      for(int j=0; j<n; ++j){
        if(f[j][a-1] && j!=a-1){
          f[a-1][j]=true;
        }
      }
    }
    else{
      set<int> num;
      for(int j=0; j<n; ++j){
        if(f[a-1][j]) num.insert(j);
      }
      for(auto &j:num){        
        for(int l=0; l<n; ++l){
          if(f[a-1][j] && f[j][l] && a-1!=j && j!=l && l!=a-1){
            f[a-1][l]=true;
          }
        }
      }
    }
  }
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      cout << (f[i][j] && i!=j ? 'Y' : 'N');
    }
    cout << "\n";
  }
  return 0;
}