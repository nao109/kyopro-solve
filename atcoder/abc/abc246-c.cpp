#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k,x;
  cin >> n >> k >> x;
  vector<int> a(n);
  for(int &i:a){
    cin >> i;
    int ch=min(i/x,k);
    i-=x*ch;
    k-=ch;
  }
  
  sort(all(a));
  reverse(all(a));
  
  int ans=0;
  for(int &i:a){
    ans+=(k>0 ? 0 : i);
    --k;
  }
  cout << ans << endl;
  return 0;
}