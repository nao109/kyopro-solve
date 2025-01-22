#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> a(n);
  for(int i=0; i<n; ++i){
    cin >> a[i].fi;
    a[i].se=i+1;
  }
  sort(all(a));
  reverse(all(a));
  for(int i=0; i<n; ++i) cout << a[i].se << endl;
  return 0;
}