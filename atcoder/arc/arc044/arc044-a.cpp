#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  if(n==1){
    cout << "Not Prime\n";
    return 0;
  }
  bool ans=true;
  for(int i=2; i*i<=n; ++i){
    if(n%i==0) ans=false;
  }
  if(!ans && n%2==1 && n%5!=0){
    int sum=0;
    while(n>0){
      sum+=n%10;
      n/=10;
    }
    if(sum%3!=0) ans=true;
  }
  cout << (ans ? "Prime\n" : "Not Prime\n");
  return 0;
}