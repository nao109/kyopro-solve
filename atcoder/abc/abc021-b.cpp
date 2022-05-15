#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n,a,b,k;
  cin >> n >> a >> b >> k;
  vector<int> p(k+2);
  p[0]=a,p[k+1]=b;
  for(int i=0; i<k; ++i){
    cin >> p[i+1];
  }
  set<int> ch;
  bool ans=true;
  for(int i=0; i<k+2; ++i){
    if(!ch.count(p[i])){
      ch.insert(p[i]);
    }
    else ans=false;
  }
  cout << (ans?"YES\n":"NO\n");
  return 0;
}