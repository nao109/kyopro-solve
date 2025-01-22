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
  priority_queue<int> a;
  a.push(0);
  for(int i=0; i<n; ++i){
    int c;
    cin >> c;
    a.push(c);
  }
  int sum=0;
  while(a.size()>1){
    sum+=a.top();
    a.pop();
    a.pop();
  }
  cout << sum << endl;
  return 0;
}