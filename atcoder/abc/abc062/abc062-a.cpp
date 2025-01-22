#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  vector<int> ch(3,0);
  rep(i,2){
    int n; cin >> n;
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12) ++ch[0];
    else if(n==2) ++ch[2];
    else ++ch[1];
  }
  sort(ch.begin(),ch.end());
  if(ch[2]==2) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}