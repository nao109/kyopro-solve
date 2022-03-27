#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int a,b,c; cin >> a >> b >> c;
  int ch=max(a,max(b,c));
  if(ch==a) cout << ch*2-b-c << endl;
  else if(ch==b) cout << ch*2-a-c << endl;
  else cout << ch*2-a-b << endl;
  return 0;
}