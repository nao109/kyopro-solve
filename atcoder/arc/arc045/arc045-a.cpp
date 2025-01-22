#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  vector<string> v; string str,s;
  getline(cin,str);
  stringstream ss{str};
  while(getline(ss,s,' ')) v.push_back(s);
  rep(i,v.size()){
    if(v[i]=="Left") cout << "<";
    else if(v[i]=="Right") cout << ">";
    else cout << "A";
    if(i<v.size()-1) cout << " ";
    else cout << "\n";
  }
  return 0;
}