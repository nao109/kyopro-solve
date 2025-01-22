#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n,m;
  cin >> n >> m;
  vector<int> x(n),dice(m);
  for(int i=0; i<n; ++i) cin >> x[i];
  for(int i=0; i<m; ++i) cin >> dice[i];
  int cell=0,cnt=0;
  while(cell<n-1){
    cell+=dice[cnt];
    cell+=x[cell];
    ++cnt;
  }
  cout << cnt << endl;
  return 0;
}