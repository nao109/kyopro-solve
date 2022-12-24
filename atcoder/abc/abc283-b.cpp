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
  int q;
  cin >> q;
  for(int i=0; i<q; ++i){
    int t,k,x;
    cin >> t >> k;
    if(t==1){
      cin >> x;
      a[k-1]=x;
    }
    else cout << a[k-1] << endl;
  }
  return 0;
}