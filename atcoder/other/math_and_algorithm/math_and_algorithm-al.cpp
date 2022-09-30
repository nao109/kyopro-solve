#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int t,n;
  cin >> t >> n;
  vector<int> num(t+1);
  for(int i=0; i<n; ++i){
    int l,r;
    cin >> l >> r;
    num[l]++,num[r]--;
  }
  for(int i=1; i<t+1; ++i) num[i]+=num[i-1];
  for(int i=0; i<t; ++i) cout << num[i] << endl;
  return 0;
}