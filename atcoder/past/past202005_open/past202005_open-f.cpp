#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<set<char>> a(n);
  for(int i=0; i<n; ++i){
    string s;
    cin >> s;
    for(char &j:s) a[i].insert(j);
  }

  string f="",b="";
  for(int i=0; i<n/2; ++i){
    bool flag=true;
    for(int j=0; j<26; ++j){
      if(a[i].count('a'+j) && a[n-1-i].count('a'+j)){
        f.push_back('a'+j);
        b.push_back('a'+j);
        flag=false;
        break;
      }
    }
    if(flag){
      cout << "-1\n";
      return 0;
    }
  }
  if(n%2==1){
    for(int i=0; i<26; ++i){
      if(a[(n-1)/2].count('a'+i)){
        f.push_back('a'+i);
        break;
      }
    }
  }
  reverse(all(b));
  cout << f+b << endl;
  return 0;
}