#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int inf=1001001001;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<pair<int,int>> ab(n);
  rep(i,n) cin >> ab.at(i).first >> ab.at(i).second;
  sort(ab.begin(),ab.end());
  int sum=inf;
  rep(i,n){
    rep(j,n){
      if(i==j) sum=min(sum,ab.at(i).first+ab.at(i).second);
      else sum=min(sum,max(ab.at(i).first,ab.at(j).second));
    }
  }
  cout << sum << endl;
  return 0;
}