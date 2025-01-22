#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; int n;
  cin >> s >> n;
  string ch[25]={};
  int a=0;
  rep(i,5)rep(j,5){
    ch[a]+=s[i];
    ch[a]+=s[j];
    a++;
  }
  cout << ch[n-1] << endl;
  return 0;
}