#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  map<int,int> a;
  for(int i=0; i<n; ++i){
    int num;
    cin >> num;
    a[num]=i+1;
  }
  vector<int> parent(2*n+2,0);
  for(int i=1; i<2*n+2; ++i){
    if(a.count(i)) parent[2*a[i]]=parent[2*a[i]+1]=parent[i]+1;
  }
  for(int i=1; i<2*n+2; ++i) cout << parent[i] << endl;
  return 0;
}