#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n,k;
  cin >> n >> k;
  vector<int> t(n);
  for(int i=0; i<n; ++i){
    cin >> t[i];
  }
  int sum=0;
  for(int i=0; i<n; ++i){
    if(i==0||i==1){
      sum+=t[i];
    }
    else{
      if(i==2){
        sum+=t[2];
      }
      else{
        sum+=t[i]-t[i-3];
      }
      if(sum<k){
        cout << i+1 << endl;
        return 0;
      }
    }
  }
  cout << -1 << endl;
  return 0;
}