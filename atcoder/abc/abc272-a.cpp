#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,sum=0;
  cin >> n;
  for(int i=0; i<n; ++i){
    int a;
    cin >> a;
    sum+=a;
  }
  cout << sum << endl;
  return 0;
}