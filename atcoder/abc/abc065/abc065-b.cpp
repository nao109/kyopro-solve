#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n; cin >> n;
  vector<int> a(n);
  for(int &i:a){
    cin >> i;
    i--;
    cerr << i << endl;
  }
  map<int,int> light;
  int i=a[0],cnt=1;
  while(!light.count(i)){
    light[i]=cnt;
    cnt++;
    i=a[i];
  }
  cout << (light.count(1) ? light[1] : -1) << endl;
  return 0;
}