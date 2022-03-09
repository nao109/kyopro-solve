#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int ch=n/1.08;
  if((int)(ch*1.08)==n) cout << ch << endl;
  else if((int)((ch+1)*1.08)==n) cout << ch+1 << endl;
  else cout << ":(\n";
  return 0;
}