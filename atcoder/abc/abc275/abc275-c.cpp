#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
using P = pair<int,int>;
int main(){
  //pone:ポーン有無判定用,pos:ポーンの位置
  set<P> pone;
  vector<P> pos;
  for(int i=0; i<9; ++i){
    string s;
    cin >> s;
    for(int j=0; j<9; ++j){
      if(s[j]=='#'){
        pone.emplace(i,j);
        pos.emplace_back(i,j);
      }
    }
  }
  //n:ポーンの数
  int n=pos.size();
  int ans=0;
  //ai,bi:2頂点の候補
  for(int ai=0; ai<n; ++ai){
    for(int bi=0; bi<n; ++bi){
      if(ai!=bi){
        //a,b:2頂点候補の位置
        P a=pos[ai],b=pos[bi];
        //di,dj:2頂点候補を結ぶベクトルの成分
        int di=b.fi-a.fi, dj=b.se-a.se;
        //c,d:残りの頂点候補
        P c(b.fi-dj,b.se+di), d(c.fi-di,c.se-dj);
        if(pone.count(c) && pone.count(d)) ans++;
      }
    }
  }
  //重複の解消
  ans/=4;
  cout << ans << endl;
  return 0;
}