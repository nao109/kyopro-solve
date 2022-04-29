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
  for(int i=2; i<=n; i+=2){
    string t1=s.substr(0,(n-i)/2),t2=s.substr((n-i)/2,(n-i)/2);
    cerr << t1 << t2 << endl;
    if(t1==t2){
      int l=t1.size(); cout << l*2 << endl; break;
    }
  }
  return 0;
}