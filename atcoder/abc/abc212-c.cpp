#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const int INF = 1000000000;
int main(){
  int n,m;
  cin >> n >> m;
  set<int> a,b;
  vector<int> ab;
  int num;
  for(int i=0; i<n; ++i){
    cin >> num;
    a.insert(num);
    ab.push_back(num);
  }
  for(int i=0; i<m; ++i){
    cin >> num;
    b.insert(num);
    ab.push_back(num);
  }
  sort(all(ab));
  
  int ans=INF;
  for(int i=0; i<n+m-1; ++i){
    if(ab[i+1]-ab[i]<ans){
      if(a.count(ab[i]) && b.count(ab[i+1])) ans=ab[i+1]-ab[i];
      else if(a.count(ab[i+1]) && b.count(ab[i])) ans=ab[i+1]-ab[i];
    }
  }
  cout << ans << endl;
  return 0;
}