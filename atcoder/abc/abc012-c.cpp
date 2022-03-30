#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int diff=2025-n;
  queue<int> ch;
  for(int i=1; i<10; ++i){
    if(diff%i==0&&diff/i<10) ch.push(i);
  }
  while(!ch.empty()){
    cout << ch.front() << " x " << diff/ch.front() << endl;
    ch.pop();
  }
  return 0;
}