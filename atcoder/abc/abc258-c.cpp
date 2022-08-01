#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,q;
  string s;
  cin >> n >> q >> s;
  int start=0;
  for(int i=0; i<q; ++i){
    int k,x;
    cin >> k >> x;
    if(k==1) start=(start-x+n)%n;
    else cout << s[(start+x)%n-1] << endl;
  }
  return 0;
}