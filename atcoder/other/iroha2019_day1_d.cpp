#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,taka,aoki;
  cin >> n >> taka >> aoki;
  cerr << taka << " " << aoki << "\n";
  vector<int> a(n);
  for(int &i:a) cin >> i;
  sort(all(a));
  for(int i=0; i<n; ++i){
    if(i%2==0) aoki+=a[i];
    else taka+=a[i];
  }
  if(taka>aoki) cout << "Takahashi\n";
  else if(taka<aoki) cout << "Aoki\n";
  else cout << "Draw\n";
  return 0;
}