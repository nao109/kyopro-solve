#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> a(n),age(n);
  for(int i=0; i<n; ++i){
    cin >> a[i];
    age[i]=a[i];
  }
  sort(all(age));
  for(int i=0; i<n; ++i){
    cout << max(age[n-1]-a[i],a[i]-age[0]) << endl;
  }
  return 0;
}