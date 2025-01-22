#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int q;
  cin >> q;
  map<int,int> s;
  for(int i=0; i<q; ++i){
    int a; cin >> a;
    if(a==1){
      int x; cin >> x;
      if(s.count(x)) ++s[x];
      else s[x]=1;
    }
    else if(a==2){
      int x,c;
      cin >> x >> c;
      s[x]-=min(c,s[x]);
      if(s[x]==0) s.erase(x);
    }
    else{
      cout << s.rbegin()->first-s.begin()->first << endl;
    }
  }
  return 0;
}