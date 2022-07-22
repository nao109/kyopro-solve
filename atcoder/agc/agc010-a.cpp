#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  int even=0,odd=0;
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    if(a%2==1) ++odd;
    else ++even;
  }

  if(odd==2 && even==0){
    cout << "YES\n";
    return 0;
  }

  odd=odd%2;
  even=min(1,even);

  if(even+odd==1) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}