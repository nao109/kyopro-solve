#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,x;
  cin >> n >> x;
  for(int i=0; i<n; ++i){
    int p;
    cin >> p;
    if(p==x) cout << i+1 << endl;
  }
  return 0;
}