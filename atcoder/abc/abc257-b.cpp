#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k,q;
  cin >> n >> k >> q;
  vector<int> a(k),l(q);
  for(int i=0; i<k; ++i){
    cin >> a[i];
    a[i]--;
  }
  for(int i=0; i<q; ++i){
    cin >> l[i];
    l[i]--;
    if(a[l[i]]==n-1) continue;
    else if(l[i]==k-1) a[l[i]]++;
    else if(a[l[i]+1]-a[l[i]]>=2) a[l[i]]++;
    cerr << a[l[i]] << endl;
  }
  for(int i=0; i<k; ++i) cout << a[i]+1 << endl;
  return 0;
}