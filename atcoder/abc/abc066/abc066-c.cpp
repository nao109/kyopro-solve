#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  if(n%2==0){
    for(int i=n-1; i>=0; i-=2){
      cout << a[i] << " ";
    }
    for(int i=0; i<n; i+=2){
      cout << a[i];
      if(i<n-2) cout << " ";
      else cout << endl;
    }
  }
  else{
    for(int i=n-1; i>=0; i-=2){
      cout << a[i] << " ";
    }
    for(int i=1; i<n; i+=2){
      cout << a[i];
      if(i<n-2) cout << " ";
      else cout << endl;
    }
  }
  return 0;
}