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
  int m=1000;
  rep(i,n-2){
    int ch=stoi(s.substr(i,3));
    m=min(abs(753-ch),m);
  }
  cout << m << endl;
  return 0;
}