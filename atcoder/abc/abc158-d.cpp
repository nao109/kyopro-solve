#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  int q;
  cin >> s >> q;
  bool swap=false;
  for(int i=0; i<q; i++){
    int k;
    cin >> k;
    if(k==1) swap=!swap;
    else{
      int f;
      char c;
      cin >> f >> c;
      if((!swap && f==1) || (swap && f==2)) s=c+s;
      else s=s+c;
    }
  }
  if(swap) reverse(all(s));
  cout << s << endl;
  return 0;
}