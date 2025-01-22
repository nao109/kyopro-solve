#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k;
  cin >> n >> k;
  priority_queue<int,vector<int>,greater<int>> p;
  for(int i=0; i<k; ++i){
    int c;
    cin >> c;
    p.push(c);
  }
  cout << p.top() << endl;
  for(int i=0; i<n-k; ++i){
    int a;
    cin >> a;
    if(p.top()<a){
      p.pop();
      p.push(a);
    }
    cout << p.top() << endl;
  }
  return 0;
}