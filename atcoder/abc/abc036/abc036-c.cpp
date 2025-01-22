#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n; cin >> n;
  vector<int> a(n);
  map<int,int> ch;
  for(int i=0; i<n; ++i){
    cin >> a[i];
    if(!ch.count(a[i])) ch[a[i]]=1;
  }
  int num=0;
  for(auto i:ch){
    ch[i.fi]=num;
    ++num;
  }
  for(int i=0; i<n; ++i){
    cout << ch[a[i]] << endl;
  }
  return 0;
}