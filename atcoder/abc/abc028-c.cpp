#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int a,b,c,d,e; cin >> a >> b >> c >> d >> e;
  vector<int> s(10);
  s[0]=c+d+e; s[1]=b+d+e; s[2]=b+c+e; s[3]=b+c+d; s[4]=a+d+e;
  s[5]=a+c+e; s[6]=a+c+d; s[7]=a+b+e; s[8]=a+b+d; s[9]=a+b+c;
  sort(s.begin(),s.end());
  cout << s[7] << endl;
  return 0;
}