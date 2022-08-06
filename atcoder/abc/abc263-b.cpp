#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int f(vector<int> &a,int i){
  if(a[i-1]==-1) return 0;
  else return f(a,a[i-1])+1;
}
int main(){
  int n;
  cin >> n;
  vector<int> a(n,-1);
  for(int i=1; i<n; ++i) cin >> a[i];
  int ans=f(a,n);
  cout << ans << endl;
  return 0;
}