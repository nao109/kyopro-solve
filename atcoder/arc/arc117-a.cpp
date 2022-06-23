#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a,b;
  cin >> a >> b;
  if(a==b){
    for(int i=1; i<=a; ++i){
      cout << i << " " << -i << (i<a ? " " : "\n");
    }
  }
  else if(a<b){
    int sum=0;
    for(int i=1; i<=b; ++i){
      cout << -i << " ";
      sum+=i;
    }
    for(int i=1; i<=a-1; ++i){
      cout << i << " ";
      sum-=i;
    }
    cout << sum << endl;
  }
  else{
    int sum=0;
    for(int i=1; i<=a; ++i){
      cout << i << " ";
      sum+=i;
    }
    for(int i=1; i<=b-1; ++i){
      cout << -i << " ";
      sum-=i;
    }
    cout << -sum << endl;
  }
  return 0;
}