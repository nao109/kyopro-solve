#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int h,w;
  cin >> h >> w;
  vector<string> g(h);
  for(int i=0; i<h; ++i) cin >> g[i];
  set<pair<int,int>> pos;
  pair<int,int> now={0,0};
  while(!pos.count(now)){
    pos.insert(now);
    if(now.fi>0 && g[now.fi][now.se]=='U') --now.fi;
    else if(now.fi<h-1 && g[now.fi][now.se]=='D') ++now.fi;
    else if(now.se>0 && g[now.fi][now.se]=='L') --now.se;
    else if(now.se<w-1 && g[now.fi][now.se]=='R') ++now.se;
    else{
      cout << now.fi+1 << " " << now.se+1 << endl;
      return 0;
    }
  }
  cout << "-1\n";
  return 0;
}