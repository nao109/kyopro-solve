#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  cout << fixed << setprecision(15);
  int a[4]; rep(i,4){char c; cin >> c; a[i]=c-'0';}
  rep(i,8){
    int sum=a[0]; string s=to_string(a[0]);
    rep(j,3){
      if(i&1<<j){sum+=a[j+1]; s+="+";}
      else{sum-=a[j+1]; s+="-";}
      s+=to_string(a[j+1]);
    }
    if(sum==7){cout << s+"=7" << endl; return 0;}
  }
  return 0;
}