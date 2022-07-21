#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  vector<int> cnt(m,0);
  cerr << cnt.capacity() << endl;
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    ++cnt[a-1];
  }
  sort(all(cnt));
  cout << cnt[0] << endl;
  cout << cnt[m-1] << endl;
  return 0;
}