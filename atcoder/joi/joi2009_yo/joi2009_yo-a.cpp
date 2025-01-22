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
  rep(i,3){
    int ah,am,as,lh,lm,ls;
    cin >> ah >> am >> as >> lh >> lm >> ls;
    int time=(3600*lh+60*lm+ls)-(3600*ah+60*am+as);
    cout << time/3600 << " ";
    time%=3600;
    cout << time/60 << " ";
    time%=60;
    cout << time << endl;
  }
  return 0;
}