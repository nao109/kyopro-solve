#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n;
  cin >> n;
  set<int> a;
  for(int i=0; i<n; ++i){
    int c; cin >> c;
    if(!a.count(c)) a.insert(c);
    else a.erase(c);
  }
  cout << a.size() << endl;
  return 0;
}