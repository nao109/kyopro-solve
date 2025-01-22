#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int t,n,m;
  cin >> t >> n;
  vector<int> a(n);
  for(int &i:a) cin >> i;
  cin >> m;
  vector<int> b(m);
  for(int &i:b) cin >> i;
  
  if(n<m) cout << "no\n";
  else if(n==m){
    bool sell=true;
    for(int i=0; i<n; ++i){
      if(a[i]+t<b[i] || b[i]<a[i]) sell=false;
    }
    cout << (sell ? "yes\n" : "no\n");
  }
  else{
    bool sell=true;
    for(int i=0; i<m; ++i){
      bool chk=true;
      for(int j=0; j<n; ++j){
        if(a[j]<b[i] && b[i]<=a[j]+t) chk=false;
      }
      if(chk) sell=false;
    }
    cout << (sell ? "yes\n" : "no\n");
  }
  return 0;
}