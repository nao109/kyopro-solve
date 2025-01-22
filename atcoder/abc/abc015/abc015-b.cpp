#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> a(n);
  int ans=0,num=0;
  rep(i,n){
    cin >> a[i];
    if(a[i]>0){
      ans+=a[i];
      num+=1;
    }
  }
  cout << (ans+num-1)/num << endl;
  return 0;
}