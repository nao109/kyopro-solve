#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  string a; ll b; cin >> a >> b;
  cout << a[(b-1)%a.size()+1] << endl;
  return 0;
}