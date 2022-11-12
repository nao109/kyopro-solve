#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  set<string> s;
  for(int i=0; i<n; ++i){
    string str;
    cin >> str;
    s.insert(str);
  }
  bool flag=true;
  if(s.size()<n) flag=false;
  for(string i:s){
    if(i[0]!='H' && i[0]!='D' && i[0]!='C' && i[0]!='S'){
      flag=false;
    }
    if(i[1]!='A' && i[1]!='2' && i[1]!='3' && i[1]!='4' && i[1]!='5' && i[1]!='6' && i[1]!='7' && i[1]!='8' && i[1]!='9' && i[1]!='T' && i[1]!='J' && i[1]!='Q' && i[1]!='K'){
      flag=false;
    }
  }
  cout << (flag ? "Yes\n" : "No\n");
  return 0;
}