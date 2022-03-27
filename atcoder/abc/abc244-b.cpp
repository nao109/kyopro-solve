#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; string t; cin >> n >> t;
  pair<int,int> now={0,0};
  int arg=0;
  rep(i,n){
    if(t[i]=='S'){
      if(arg%4==0) ++now.first;
      else if(arg%4==1) --now.second;
      else if(arg%4==2) --now.first;
      else ++now.second;
    }
    else if(t[i]=='R') ++arg;
  }
  cout << now.first << " " << now.second << endl;
  return 0; 
}