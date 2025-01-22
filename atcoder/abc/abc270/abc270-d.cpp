#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k;
  cin >> n >> k;
  vector<int> a(k);
  for(int &i:a) cin >> i;
  int taka=0,cnt=0;
  while(n>0){
    while(a.back()>n) a.pop_back();
    n-=a.back();
    if(cnt%2==0) taka+=a.back();
    cnt++;
  }
  cout << taka << endl;
  return 0;
}