#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  map<string,int> cnt;
  for(int i=0; i<n; ++i){
    string s;
    cin >> s;
    if(cnt.count(s)) cnt[s]++;
    else cnt[s]=1;
  }
  int ma=0;
  for(auto &i:cnt) ma=max(i.se,ma);
  for(auto &i:cnt){
    if(i.se==ma) cout << i.fi << endl;
  }
  return 0;
}