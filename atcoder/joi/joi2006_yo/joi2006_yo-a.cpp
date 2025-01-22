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
  int n; cin >> n;
  int pa=0,pb=0;
  rep(i,n){
    int a,b; cin >> a >> b;
    if(a>b) pa+=a+b;
    else if(a<b) pb+=a+b;
    else{pa+=a; pb+=b;}
  }
  cout << pa << " " << pb << endl;
  return 0;
}