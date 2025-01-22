#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  int n=s.size();
  vector<string> ss(n);
  ss[0]=s;
  for(int i=1; i<n; ++i){
    int l=ss[i-1].size();
    ss[i]=ss[i-1].back()+ss[i-1].substr(0,l-1);
  }
  sort(all(ss));
  cout << ss[0] << endl << ss[n-1] << endl;
  return 0;
}