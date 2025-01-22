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
  string ch[15]={"NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};
  double deg,dis; cin >> deg >> dis;
  dis=round(dis*10/60)/10;
  string ans="";
  if(0.0<=dis&&dis<=0.2) ans+="C";
  else if((0<=deg&&deg<112.5)||(3487.5<=deg&&deg<3600)) ans+="N";
  else{
    rep(i,15){
      double mi=112.5+225*i,ma=337.5+225*i;
      if(mi<=deg&&deg<ma) ans+=ch[i];
    }
  }
  ans+=" ";
  if(0.0<=dis&&dis<=0.2) ans+="0";
  if(0.3<=dis&&dis<=1.5) ans+="1";
  if(1.6<=dis&&dis<=3.3) ans+="2";
  if(3.4<=dis&&dis<=5.4) ans+="3";
  if(5.5<=dis&&dis<=7.9) ans+="4";
  if(8.0<=dis&&dis<=10.7) ans+="5";
  if(10.8<=dis&&dis<=13.8) ans+="6";
  if(13.9<=dis&&dis<=17.1) ans+="7";
  if(17.2<=dis&&dis<=20.7) ans+="8";
  if(20.8<=dis&&dis<=24.4) ans+="9";
  if(24.5<=dis&&dis<=28.4) ans+="10";
  if(28.5<=dis&&dis<=32.6) ans+="11";
  if(32.7<=dis) ans+="12";
  cout << ans << endl;
  return 0;
}