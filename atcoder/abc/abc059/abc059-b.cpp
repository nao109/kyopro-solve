#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  string a,b; cin >> a >> b;
  if(a.size()>b.size()) cout << "GREATER\n";
  else if(a.size()<b.size()) cout << "LESS\n";
  else{
    if(a==b) cout << "EQUAL\n";
    else{
      bool flag=true;
      rep(i,a.size()){
        if(a[i]>b[i]){flag=true; break;}
        else if(a[i]<b[i]){flag=false; break;}
      }
      if(flag) cout << "GREATER\n";
      else cout << "LESS\n";
    }
  }
  return 0;
}