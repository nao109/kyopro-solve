#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n,w;
  cin >> n >> w;
  vector<int> a(n+2,0);
  for(int i=0; i<n; ++i) cin >> a[i];
  sort(all(a));
  vector<bool> ch(w,false);
  for(int i=0; i<n+2; i++){
    for(int j=i+1; j<n+2; j++){
      for(int k=j+1; k<n+2; k++){
        if(i!=j && j!=k && k!=i && a[i]+a[j]+a[k]<=w){
          ch[a[i]+a[j]+a[k]-1]=true;
        }
      }
    }
  }
  int ans=0;
  for(int i=0; i<w; ++i){
    if(ch[i]) ++ans;
  }
  cout << ans << endl;
  return 0;
}