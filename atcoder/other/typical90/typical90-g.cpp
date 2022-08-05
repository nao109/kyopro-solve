#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int &i:a) cin >> i;
  sort(all(a));
  int q;
  cin >> q;
  for(int i=0; i<q; ++i){
    int b;
    cin >> b;
    auto iter=lower_bound(all(a), b);
    auto pos=iter-a.begin();
    if(pos==0) cout << abs(a[pos]-b) << endl;
    else cout << min(abs(b-a[pos-1]),abs(a[pos]-b)) << endl;
  }
  return 0;
}