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
    int a;
    cin >> a;
    if(a==x){
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}