#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  map<string,int> chk;
  vector<string> s(n);
  for(int i=0; i<n; ++i){
    string s;
    cin >> s;
    if(!chk.count(s)){
      cout << s << endl;
      chk[s]=1;
    }
    else{
      cout << s+"(" << (chk[s]+1) << ")\n";
      ++chk[s];
    }
  }
  return 0;
}