#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int q;
  cin >> q;
  deque<int> d;
  for(int i=0; i<q; ++i){
    int t,x;
    cin >> t >> x;
    if(t==1) d.push_front(x);
    else if(t==2) d.push_back(x);
    else cout << d[x-1] << endl;
  }
  return 0;
}