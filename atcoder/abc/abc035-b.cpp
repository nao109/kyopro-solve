#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  cout << fixed << setprecision(15);
  string s; int t; cin >> s >> t;
  int n=s.size();
  int x=0,y=0,cnt=0;
  rep(i,n){
    if(s[i]=='L') --x;
    else if(s[i]=='R') ++x;
    else if(s[i]=='U') ++y;
    else if(s[i]=='D') --y;
    else ++cnt;
  }
  if(t==1){
    if(x>=0) x+=cnt;
    else x-=cnt;
  }
  else{
    if(x>=cnt){x-=cnt; cnt=0;}
    else if(0<=x&&x<cnt){cnt-=x; x=0;}
    else if(-cnt<x&&x<0){cnt-=x; x=0;}
    else if(x<=-cnt){x+=cnt; cnt=0;}
    if(cnt>0){
      if(0<=y) y-=cnt;
      else y+=cnt;
    }
  }
  cout << abs(x)+abs(y) << endl;
  return 0;
}