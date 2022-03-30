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
  rep(i,10){
    if(diff%(i+1)==0&&diff/(i+1)<10) ch.push(i+1);
  }
  while(!ch.empty()){
    cout << ch.front() << " x " << diff/ch.front() << endl;
    ch.pop();
  }
  return 0;
}