#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n; n=n%30;
  string s="123456";
  int ch=n/5;
  if(ch==1) s="234561";
  else if(ch==2) s="345612";
  else if(ch==3) s="456123";
  else if(ch==4) s="561234";
  else if(ch==5) s="612345";
  int ch=n%5;
  rep(i,ch){
    swap(s[i],s[i+1]);
  }
  cout << s << endl;
  return 0;
}