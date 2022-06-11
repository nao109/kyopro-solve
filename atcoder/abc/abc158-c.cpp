#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a,b;
  cin >> a >> b;
  int money=0;
  for(int i=10; i<=1250; ++i){
    if(floor((double)i*0.08)==a){
      if(floor((double)i*0.1)==b){
        cout << i << endl;
        return 0;
      }
    }
  }
  cout << "-1\n";
  return 0;
}