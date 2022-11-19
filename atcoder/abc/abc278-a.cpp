#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k;
  cin >> n >> k;
  queue<int> a;
  for(int i=0; i<n; ++i){
    int c;
    cin >> c;
    a.push(c);
  }
  for(int i=0; i<k; ++i){
    a.pop();
    a.push(0);
  }
  for(int i=0; i<n; ++i){
    cout << a.front();
    a.pop();
    if(i<n-1) cout << " ";
    else cout << "\n";
  }
  return 0;
}