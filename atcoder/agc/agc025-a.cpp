#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  int mi=46;
  for(int i=1; i<=n/2; ++i){
    int chk=0;
    string a=to_string(i),b=to_string(n-i);
    for(char &i:a) chk+=i-'0';
    for(char &i:b) chk+=i-'0';
    mi=min(chk,mi);
  }
  cout << mi << endl;
  return 0;
}