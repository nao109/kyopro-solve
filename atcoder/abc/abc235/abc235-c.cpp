#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,q;
  cin >> n >> q;
  map<int,vector<int>> ch;
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    ch[a].push_back(i+1);
  }
  for(int i=0; i<q; ++i){
    int x,k;
    cin >> x >> k;
    if(ch[x].size()<k) cout << "-1\n";
    else{
      cout << ch[x][k-1] << endl;
    }
  }
  return 0;
}