#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int d,n;
  cin >> d >> n;
  vector<int> cnt(d+1);
  for(int i=0; i<n; i++){
    int l,r;
    cin >> l >> r;
    cnt[l-1]++,cnt[r]--;
  }

  int ans=0;
  for(int i=0; i<d; i++){
    ans+=cnt[i];
    cout << ans << endl;
  }
  return 0;
}