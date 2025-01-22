#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  set<int> a;
  for(int i=0; i<n; ++i){
    int x;
    cin >> x;
    a.insert(x);
  }
  while(1){
    if(*a.begin()==*a.rbegin()) break;
    else{
      a.insert(*a.rbegin()-*a.begin());
      a.erase(*a.rbegin());
    }
  }
  cout << *a.begin() << endl;
  return 0;
}