#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  string s;
  cin >> n >> s;
  vector<int> cnt(3,0);
  int now=0;
  cnt[0]=1;
  for(int i=0; i<n; ++i){
    if(s[i]=='L'){
      if(now>0) now--;
      cnt[now]++;
    }
    else if(s[i]=='R'){
      if(now<2) now++;
      cnt[now]++;
    }
  }
  cout << cnt[2] << endl;
  return 0;
}