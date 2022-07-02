#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,q;
  cin >> n >> q;
  deque<char> s;
  for(int i=0; i<n; ++i){
    char c;
    cin >> c;
    s.push_back(c);
  }
  for(int i=0; i<q; ++i){
    int t,x;
    cin >> t >> x;
    if(t==1){
      for(int i=0; i<x; ++i){
        s.push_front(a.back());
        s.pop_back();
      }
    }
    else{
      cout << s[x-1] << endl;
    }
  }
  return 0;
}