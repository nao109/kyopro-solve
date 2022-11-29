#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,taka,aoki;
  cin >> n >> taka >> aoki;
  vector<int> a(n);
  for(int &i:a) cin >> i;
  for(int i=0; i<n/2; ++i){
    taka+=a[i*2];
    aoki+=a[i*2+1];
  }
  if(taka>aoki) cout << "Takahashi\n";
  else if(taka<aoki) cout << "Aoki\n";
  else cout << "Draw\n";
  return 0;
}