#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int h,m;
  cin >> h >> m;
  int h1=h%10, h10=h/10, m1=m%10, m10=m/10;
  if(h10==0){
    if(0<=h1 && h1<=5){
      cout << h10 << h1 << " " << m10 << m1 << endl;
    }
    else cout << "10 0\n";
  }
  if(h10==1){
    if(0<=h1 && h1<=5){
      cout << h10 << h1 << " " << m10 << m1 << endl;
    }
    else cout << "20 0\n";
  }
  if(h10==2){
    if(0<=m10 && m10<=3){
      cout << h10 << h1 << " " << m10 << m1 << endl;
    }
    else cout << (h+1)%24 << " 0\n";
    
  }
  return 0;
}