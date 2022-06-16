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
  int mi=100,ma=0,ans=0;
  for(int &i:a){
    cin >> i;
    mi=min(i,mi);
    ma=max(i,ma);
    ans+=i;
  }
  cout << ans-mi-ma << endl;
  return 0;
}