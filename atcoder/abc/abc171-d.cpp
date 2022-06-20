#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  map<int,int> a;
  for(int i=0; i<n; ++i){
    int k;
    cin >> k;
    if(a.count(k)) ++a[k];
    else a[k]=1;
  }
  ll sum=0;
  for(auto i:a){
    sum+=i.fi*i.se;
  }
  int q;
  cin >> q;
  for(int i=0; i<q; ++i){
    int b,c;
    cin >> b >> c;
    if(a.count(b)){
      if(a.count(c)) a[c]+=a[b];
      else a[c]=a[b];
      sum+=c*a[b];
      sum-=b*a[b];
      a[b]=0;
    }
    cout << sum << endl;
  }
  return 0;
}