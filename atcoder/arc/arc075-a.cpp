#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,ans=0;
  cin >> n;
  vector<int> s(n);
  for(int &i:s){
    cin >> i;
    ans+=i;
  }
  if(ans%10!=0){
    cout << ans << endl;
    return 0;
  }
  for(int &i:s){
    ans-=i;
    if(ans%10!=0){
      cout << ans << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}