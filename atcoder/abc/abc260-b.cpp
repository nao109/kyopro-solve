#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
using P = pair<int,int>;
int main(){
  int n,x,y,z,cnt,N;
  cin >> n >> x >> y >> z;
  vector<pair<P,bool>> a(n),b(n),c(n);
  set<int> num;
  for(auto &i:a) cin >> i.fi.fi;
  for(auto &i:b) cin >> i.fi.fi;
  for(int i=0; i<n; ++i) c[i].fi.fi=a[i].fi.fi+b[i].fi.fi;
  for(int i=0; i<n; ++i){
    a[i].fi.se=-(i+1);
    b[i].fi.se=-(i+1);
    c[i].fi.se=-(i+1);
    a[i].se=false;
    b[i].se=false;
    c[i].se=false;
  }
  
  sort(all(a));
  reverse(all(a));
  sort(all(b));
  reverse(all(b));
  sort(all(c));
  reverse(all(c));

  cnt=0,N=0;
  while(cnt<x){
    if(!a[N].se){
      num.insert(-a[N].fi.se);
      a[N].se=true;
      ++cnt;
    }
    ++N;
  }
  
  for(int i=0; i<n; ++i){
    if(a[i].se){
      for(int j=0; j<n; ++j){
        if(a[i].fi.se==b[j].fi.se) b[j].se=true;
      }
    }
  }
  
  cnt=0,N=0;
  while(cnt<y){
    if(!b[N].se){
      num.insert(-b[N].fi.se);
      b[N].se=true;
      ++cnt;
    }
    ++N;
  }

  for(int i=0; i<n; ++i){
    if(b[i].se){
      for(int j=0; j<n; ++j){
        if(b[i].fi.se==c[j].fi.se) c[j].se=true;
      }
    }
  }
  
  cnt=0,N=0;
  while(cnt<z){
    if(!c[N].se){
      num.insert(-c[N].fi.se);
      c[N].se=true;
      ++cnt;
    }
    ++N;
  }
  
  for(auto &i:num) cout << i << endl;
  return 0;
}