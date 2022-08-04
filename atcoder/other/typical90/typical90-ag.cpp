#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int h,w;
  cin >> h >> w;
  if(h==1 || w==1) cout << h*w << endl;
  else cout << ((h+1)/2)*((w+1)/2) << endl;
  return 0;
}