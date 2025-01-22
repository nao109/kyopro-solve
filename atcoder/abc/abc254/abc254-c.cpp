#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k;
  cin >> n >> k;
  if(k==1){
    cout << "Yes\n";
    return 0;
  }
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];

  vector<vector<int>> ch(k);
  for(int i=0; i<n; ++i){
    ch[i%k].push_back(a[i]);
  }
  for(int i=0; i<k; ++i){
    sort(all(ch[i]));
    for(int j=0; j<(n+k-1)/k; ++j){
      cerr << ch[i][j] << " ";
    }
    cerr << endl;
  }
  vector<int> b;
  for(int i=0; i<(n+k-1)/k; ++i){
    for(int j=0; j<k; ++j){
      b.push_back(ch[j][i]);
    }
  }
  bool flag=true;
  for(int i=0; i<n-1; ++i){
    cerr << b[i] << " ";
    if(b[i]>b[i+1]) flag=false;
  }
  cout << (flag ? "Yes\n" : "No\n");
  return 0;
}