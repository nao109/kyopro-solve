#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  char c;
  cin >> c;
  if(c=='K' || c=='L' || c=='O' || c=='P') cout << "Right\n";
  else cout << "Left\n";
  return 0;
}