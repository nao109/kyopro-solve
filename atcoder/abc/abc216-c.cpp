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
  int n; cin >> n;
  string s="";
  while(n>0){
    if(n%2==0){n/=2; s+="B";}
    else{--n; s+="A";}
  }
  reverse(all(s));
  cout << s << endl;
  return 0;
}