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
  vector<int> b(n-1);
  for(int i=0; i<n-1; ++i) cin >> b[i];
  int sum=b[0]+b[n-2];
  for(int i=1; i<n-1; ++i){
    sum+=min(b[i-1],b[i]);
  }
  cout << sum << endl;
  return 0;
}