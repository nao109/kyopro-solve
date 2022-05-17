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
  string s[3];
  for(int i=1; i<=n; ++i) s[2]+=to_string(i);
  for(int i=0; i<2; ++i){
    for(int j=0; j<n; ++j){
      int p; cin >> p;
      s[i]+=to_string(p);
    }
  }
  int p,q,cnt=0;
  do{
    if(s[0]==s[2]) p=cnt;
    if(s[1]==s[2]) q=cnt;
    cnt++;
  }while(next_permutation(all(s[2])));
  cout << abs(q-p) << endl;
  return 0;
}