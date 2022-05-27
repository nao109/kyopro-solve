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
  vector<int> l(n);
  for(int i=0; i<n; ++i){
    cin >> l[i];
  }
  sort(all(l));
  int ans=0;
  for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
      for(int k=j+1; k<n; ++k){
        if(l[i]==l[j] || l[j]==l[k]) continue;
        if(l[k]<l[i]+l[j]) ++ans;
      }
    }
  }
  cout << ans << endl;
  return 0;
}