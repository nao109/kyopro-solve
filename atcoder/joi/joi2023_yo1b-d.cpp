#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n;
  vector<int> a(n);
  for(int &i:a) cin >> i;
  cin >> m;
  set<int> b;
  for(int i=0; i<m; ++i){
    int s;
    cin >> s;
    b.insert(s);
  }

  int score=0;
  for(int i=0; i<n; ++i){
    score+=a[i];
    if(b.count(score)) score=0;
  }
  cout << score << endl;
  return 0;
}