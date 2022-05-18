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
  for(int i=0; i<n-5; ++i){
    if(s.substr(i,6)=="HAGIYA") s.replace(i,6,"HAGIXILE");
  }
  cout << s << endl;
  return 0;
}