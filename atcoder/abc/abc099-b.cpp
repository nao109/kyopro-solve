#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a,b;
  cin >> a >> b;
  int diff=b-a;
  cout << diff*(diff-1)/2-a << endl;
  return 0;
}