#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n;
  cin >> n;
  map<int,int> a;
  for(int i=0; i<n; ++i){
    int c;
    cin >> c;
    if(a.count(c)) ++a[c];
    else a[c]=1;
  }
  int ans=0;
  for(auto i:a){
    int c=i.fi;
    if(a[c]>c) ans+=a[c]-c;
    else if(a[c]<c) ans+=a[c];
  }
  cout << ans << endl;
  return 0;
}