#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,q;
  cin >> n >> q;
  vector<int> a(n);
  for(int &i:a) cin >> i;
  int shift=0;
  for(int i=0; i<q; ++i){
    int t,x,y;
    cin >> t >> x >> y;
    --x,--y;
    if(t==1) swap(a[(x-shift+n)%n],a[(y-shift+n)%n]);
    else if(t==2) shift=(shift+1)%n;
    else cout << a[(x-shift+n)%n] << endl;
  }
  return 0;
}