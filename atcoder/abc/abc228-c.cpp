#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k;
  cin >> n >> k;
  vector<int> p(n);
  for(int i=0; i<n; ++i){
    int a,b,c;
    cin >> a >> b >> c;
    p[i]=a+b+c;
  }
  
  vector<int> r=p;
  sort(all(r), greater<int>());
  for(int i=0; i<n; ++i){
    if(p[i]+300>=r[k]) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}