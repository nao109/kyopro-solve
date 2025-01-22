#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
string f(int i,set<int> &p,set<int> &q){
  if(p.count(i)) return ".";
  else if(q.count(i)) return "o";
  else return "x";
}
int main(){
  int a,b;
  cin >> a >> b;
  set<int> p,q;
  for(int i=0; i<a; ++i){
    int n; cin >> n;
    p.insert((n>0?n:10));
  }
  for(int i=0; i<b; ++i){
    int n; cin >> n;
    q.insert((n>0?n:10));
  }
  for(int i=7; i<=10; ++i) cout << f(i,p,q)+" ";
  cout << "\n";
  for(int i=4; i<=6; ++i) cout << " "+f(i,p,q);
  cout << "\n";
  cout << " ";
  for(int i=2; i<=3; ++i) cout << " "+f(i,p,q);
  cout << "\n";
  cout << "   "+f(1,p,q)+"\n";
  return 0;
}