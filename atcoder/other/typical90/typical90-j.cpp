#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<vector<int>> p(2,vector<int>(n,0)),sum(2,vector<int>(n,0));
  for(int i=0; i<n; ++i){
    int c,pt;
    cin >> c >> pt;
    p[c-1][i]=pt;
    if(i==0){
      sum[0][0]=p[0][0];
      sum[1][0]=p[1][0];
    }
    else{
      sum[0][i]=sum[0][i-1]+p[0][i];
      sum[1][i]=sum[1][i-1]+p[1][i];
    }
  }
  int q;
  cin >> q;
  for(int i=0; i<q; ++i){
    int l,r;
    cin >> l >> r;
    --l,--r;
    int sum1=sum[0][r]-sum[0][l-1];
    int sum2=sum[1][r]-sum[1][l-1];
    cout << sum1 << " " << sum2 << endl;
  }
  return 0;
}