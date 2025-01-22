#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a,b,c;
  cin >> a >> b >> c;
  ll ans=0,ch=2*b-a-c;
  if(ch!=0){
   if(ch>0) ans=ch;
    else{
      ans=(abs(ch)+1)/2;
      ch+=ans*2;
      ans+=ch;
    }
  }
  cout << ans << endl;
  return 0;
}