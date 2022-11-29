#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,taka,aoki;
  cin >> n >> taka >> aoki;
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    if(i%2==0) taka+=a;
    else aoki+=a;
  }
  if(taka>aoki) cout << "Takahashi\n";
  else if(taka<aoki) cout << "Aoki\n";
  else cout << "Draw\n";
  return 0;
}