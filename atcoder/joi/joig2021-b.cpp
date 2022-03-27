#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,k; string t; cin >> n >> k >> t;
  for(int i=k-1; i<n; ++i){
    if('A'<=t[i]&&t[i]<='Z') t[i]='a'+t[i]-'A';
    else t[i]='A'+t[i]-'a';
  }
  cout << t << endl;
  return 0;
}