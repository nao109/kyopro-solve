#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int a[5],ac[5];
  for(int i=0; i<5; ++i){
    cin >> a[i];
    ac[i]=((a[i]+9)/10)*10;
  }
  int t[5]={};
  for(int i=0; i<5; ++i){
    for(int j=0; j<5; ++j){
      t[i]+=(i==j?a[j]:ac[j]);
    }
  }
  sort(t,t+5);
  cout << t[0] << endl;
  return 0;
}