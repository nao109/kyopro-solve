#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  int a,sum=0;
  for(int i=0; i<n; ++i){
    cin >> a;
    sum+=a-1;
  }
  cout << sum << endl;
  return 0;
}