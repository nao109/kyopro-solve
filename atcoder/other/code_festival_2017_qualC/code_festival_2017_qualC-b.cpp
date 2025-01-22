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
  for(int &i:a) cin >> i;
  ll ma=1,sum=1;
  for(int i=0; i<n; ++i){
    if(a[i]%2==0) sum*=2;
    ma*=3;
    }
  cout << ma-sum << endl;
  return 0;
}