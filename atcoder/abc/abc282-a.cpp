#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int k;
  cin >> k;
  char c='A';
  for(int i=0; i<k; ++i){
    cout << char(c+i);
  }
  cout << "\n";
  return 0;
}