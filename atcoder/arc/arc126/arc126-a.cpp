#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; ++i){
    ll n2,n3,n4,ans=0,num;
    cin >> n2 >> n3 >> n4;
    num=min(n3/2,n4);
    ans+=num;
    n3-=num*2, n4-=num;
    num=min(n3/2,n2/2);
    ans+=num;
    n3-=num*2, n2-=num*2;
    num=min(n4/2,n2);
    ans+=num;
    n4-=num*2 ,n2-=num;
    num=min(n4,n2/3);
    ans+=num;
    n4-=num, n2-=num*3;
    num=n2/5;
    ans+=num;
    cout << ans << endl;
  }
  return 0;
}