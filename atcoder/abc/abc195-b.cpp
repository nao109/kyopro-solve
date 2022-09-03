#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a,b,w;
  cin >> a >> b >> w;
  vector<int> n;
  for(int i=1; i<=1000000; ++i){
    if(a*i<=1000*w && 1000*w<=b*i) n.push_back(i);
  }
  if(n.size()==0) cout << "UNSATISFIABLE\n";
  else cout << n[0] << " " << n.back() << "\n";
  return 0;
}