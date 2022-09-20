#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  int mi=0;
  set<int> a;
  for(int i=0; i<n; ++i){
    int c;
    cin >> c;
    a.insert(c);
    while(a.count(mi)) mi++;
    cout << mi << endl;
  }
  return 0;
}