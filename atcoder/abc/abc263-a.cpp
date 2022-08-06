#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  map<int,int> a;
  for(int i=0; i<5; ++i){
    int c;
    cin >> c;
    if(a.count(c)) ++a[c];
    else a[c]=1;
  }
  if(a.size()==2){
    int n[2],num=0;
    for(auto &i:a){
      n[num]=i.se;
      ++num;
    }
    sort(n,n+2);
    if(n[0]==2 || n[1]==3) cout << "Yes\n";
    else cout << "No\n";
  }
  else cout << "No\n";
  return 0;
}