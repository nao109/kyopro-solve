#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  vector<int> a(n); rep(i,n) cin >> a[i];
  int ma=0,num=0;
  rep(i,n){
    if(ma<a[i]){ma=a[i]; num=i;}
  }
  int s1=0,s2=0;
  rep(i,n){
    if(i<num) s1+=a[i];
    else if(i>num) s2+=a[i];
  }
  cout << s1 << "\n" << s2 << "\n";
  return 0;
}