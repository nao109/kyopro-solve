#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  double x; cin >> x;
  string s;
  if(x>=10){
    double xa=x-10;
    s=to_string(xa);
    double dif=s[2]-'0';
    if(0<=dif&&dif<=2) cout << (int)(x-dif/10) << "-\n";
    else if(3<=dif&&dif<=6) cout << (int)(x-dif/10) << endl;
    else cout << (int)(x-dif/10) << "+\n";
  }
  else{
    s=to_string(x);
    double dif=s[2]-'0';
    if(0<=dif&&dif<=2) cout << (int)(x-dif/10) << "-\n";
    else if(3<=dif&&dif<=6) cout << (int)(x-dif/10) << endl;
    else cout << (int)(x-dif/10) << "+\n";
  }
  return 0;
}