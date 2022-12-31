#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<string> w(n);
  for(int i=0; i<n; ++i) cin >> w[i];

  set<string> used;
  for(int i=0; i<n; ++i){
    if(i>0){
      if(used.count(w[i]) || w[i-1].back()!=w[i][0]){
        cout << (i%2 ? "WIN\n" : "LOSE\n");
        return 0;
      }
    }
    used.insert(w[i]);
  }
  cout << "DRAW\n";
  return 0;
}