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
  
  bool flag=false;
  for(int i=0; i<q; ++i){
    int x;
    cin >> x;
    if(x==1) flag=!flag;
    else{
      int f;
      char c;
      cin >> f >> c;
      if(flag){
        if(f==1) s=c+s;
        else s=s+c;
      }
      else{
        if(f==1) s=s+c;
        else s=c+s;
      }
    }
  }
  
  if(!flag) reverse(all(s));
  cout << s << endl;
  return 0;
}