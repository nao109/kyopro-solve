#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  string s,t; cin >> s >> t;
  map<string,int> c;
  c["B9"]=0,c["B8"]=1,c["B7"]=2,c["B6"]=3,c["B5"]=4,c["B4"]=5,c["B3"]=6,c["B2"]=7,c["B1"]=8;
  c["1F"]=9,c["2F"]=10,c["3F"]=11,c["4F"]=12,c["5F"]=13,c["6F"]=14,c["7F"]=15,c["8F"]=16,c["9F"]=17;
  cout << abs(c[s]-c[t]) << endl;
  return 0;
}