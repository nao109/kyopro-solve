#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  map<int,int> sc;
  for(int i=0; i<m; ++i){
    int s,c;
    cin >> s >> c;
    if(!sc.count(s)) sc[s]=c;
    else if(sc[s]!=c){
      cout << "-1\n";
      return 0;
    }
  }
  if(n>2 && sc.count(1) && sc[1]==0){
    cout << "-1\n";
    return 0;
  }
  int ans=0;
  if(n==1){
    ans += (sc.count(1) ? sc[1] : 0);
  }
  else if(n==2){
    ans += (sc.count(1) ? sc[1]*10 : 10);
    ans += (sc.count(2) ? sc[2] : 0);
  }
  else{
    ans += (sc.count(1) ? sc[1]*100 : 100);
    ans += (sc.count(2) ? sc[2]*10 : 0);
    ans += (sc.count(3) ? sc[3] : 0);
  }
  cout << ans << endl;
  return 0;
}