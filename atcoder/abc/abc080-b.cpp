#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int f(int n){
  int ans=0;
  while(n>0){
    ans+=n%10;
    n/=10;
  }
  return ans;
}
int main(){
  int n;
  cin >> n;
  cout << (n%f(n)==0 ? "Yes\n" : "No\n");
  return 0;
}