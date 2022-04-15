#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  vector<int> s(n); int sum=0;
  rep(i,n){
    cin >> s[i]; sum+=s[i];
  }
  if(sum%10!=0){cout << sum << endl; return 0;}
  sort(s.begin(),s.end());
  reverse(s.begin(),s.end());
  while(sum%10==0){
    sum-=s[0]; s.pop_back();
  }
  cout << sum << endl;
  return 0;
}