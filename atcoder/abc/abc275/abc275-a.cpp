#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> h(n);
  for(int &i:h) cin >> i;
  int num=0,ma=0;
  for(int i=0; i<n; ++i){
    if(h[i]>ma) ma=h[i],num=i+1;
  }
  cout << num << endl;
  return 0;
}