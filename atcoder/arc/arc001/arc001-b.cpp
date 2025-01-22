#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a,b;
  cin >> a >> b;
  int t=abs(b-a);
  int cnt=t/10;
  t=t%10;
  if(t==1 || t==5) cnt+=1;
  else if(t==2 || t==4 || t==6 || t==9) cnt+=2;
  else if(t==3 || t==7 || t==8) cnt+=3;
  cout << cnt << endl;
  return 0;
}