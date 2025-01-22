#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  
  vector<int> cnt(60000);
  for(int i=1; i<=100; ++i){
    for(int j=1; j<=100; ++j){
      for(int k=1; k<=100; ++k){
        int chk=i*i+j*j+k*k+i*j+j*k+k*i;
        cnt[chk-1]++;
      }
    }
  }
  
  for(int i=0; i<n; ++i){
    cout << cnt[i] << endl;
  }
  return 0;
}