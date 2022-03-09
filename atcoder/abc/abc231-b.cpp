#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<string> s(n); rep(i,n) cin >> s.at(i);
  sort(s.begin(),s.end());
  vector<pair<int,string>> e;
  e.push_back({1,s[0]});
  int j=0;
  rep(i,n-1){
    if(s[i+1]==s[i]) ++e.at(j).first;
    else{
      e.push_back({1,s[i+1]}); ++j;
    }
  }
  sort(e.begin(),e.end());
  cout << e.at(e.size()-1).second << endl;
  return 0;
}