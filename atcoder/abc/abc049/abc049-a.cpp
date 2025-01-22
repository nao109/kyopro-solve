#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  char c; cin >> c;
  if(c=='a'||c=='i'||c=='u'||c=='e'||c=='o') cout << "vowel\n";
  else cout << "consonant\n";
  return 0;
}