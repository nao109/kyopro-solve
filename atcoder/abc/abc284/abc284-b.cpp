#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; ++i){
    int n;
    cin >> n;
    int cnt=0;
    for(int i=0; i<n; ++i){
      int a;
      cin >> a;
      if(a%2==1) cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}