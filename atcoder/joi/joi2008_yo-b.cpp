#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  string s; cin >> s;
  int n=s.size();
  int joi=0,ioi=0;
  rep(i,n-2){
    if(s[i]=='J'&&s[i+1]=='O'&&s[i+2]=='I') ++joi;
    else if(s[i]=='I'&&s[i+1]=='O'&&s[i+2]=='I') ++ioi;
  }
  cout << joi << "\n" << ioi << "\n";
  return 0;
}