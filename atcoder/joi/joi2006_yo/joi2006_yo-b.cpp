#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  map<char,char> ch;
  rep(i,n){
    char c;
    cin >> c;
    cin >> ch[c];
  }
  int m;
  cin >> m;
  rep(i,m){
    char s;
    cin >> s;
    if(ch.count(s)){
      cout << ch[s];
    }
    else{
      cout << s;
    }
  }
  cout << endl;
  return 0;
}