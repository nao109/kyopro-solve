#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,m; cin >> n >> m;
  vector<pair<int,int>> place(n);
  rep(i,n){
    place.at(i).first=i+1; //num
    place.at(i).second=i+1; //place
  }
  rep(i,m){
    int x,y; cin >> x >> y;
    rep(i,n){
      if(place.at(i).first==x){
        place.at(i).second=y; break;
      }
    }
  }
  rep(i,n) cout << place.at(i).second << endl;
  return 0;
}