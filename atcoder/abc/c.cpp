#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
using P = pair<string,int>;
int main(){
  int n;
  cin >> n;
  vector<pair<int,P>> a(n);
  map<string,int> ch;
  for(int i=0; i<n; ++i){
    a[i].fi=i;
    cin >> a[i].se.fi >> a[i].se.se;
    if(!ch.count(a[i].se.fi)) ch[a[i].se.fi]=a[i].se.se;
  }
  string s; int ma=0;
  for(auto i:ch){
    if(ma<i.se){
      ma=i.se;
      s=i.fi;
    }
  }
  for(auto i:a){
    if(i.se.fi==s && i.se.se==ma){
      cout << i.fi+1 << endl;
      return 0;
    }
  }
  return 0;
}