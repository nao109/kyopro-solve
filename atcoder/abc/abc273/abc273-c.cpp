#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  map<int,int> num,cnt,rnum;
  for(int i=0; i<n; i++){
    cin >> a[i];
    num[a[i]]=1;
    cnt[a[i]]++;
  }
  int c=1;
  for(auto &i:num){
    i.se=num.size()-c;
    rnum[i.se]=i.fi;
    c++;
  }
  for(int k=0; k<n; ++k) cout << cnt[rnum[k]] << endl;
  return 0;
}