#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;

  //y:{年,市番号},p:{市番号,所属県番号},cnt:{登場回数}
  vector<pair<int,int>> y(m),p(m);
  vector<int> cnt(n);
  for(int i=0; i<m; ++i){
    cin >> p[i].se >> y[i].fi;
    p[i].fi=y[i].se=i;
  }
  sort(all(y));

  //ans:{市番号,認識番号}
  vector<pair<int,string>> ans(m);
  for(int i=0; i<m; ++i){
    stringstream ss;
    string city;
    cnt[p[y[i].se].se]++;
    //桁埋め
    ss << setw(6) << setfill('0') << p[y[i].se].se << setw(6) << cnt[p[y[i].se].se];
    //書き出し
    ss >> city;
    ans[i]={y[i].se,city};
  }
  sort(all(ans));
  for(int i=0; i<m; ++i) cout << ans[i].se << endl;
  return 0;
}