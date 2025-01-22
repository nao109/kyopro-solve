#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k;
  cin >> n >> k;
  vector<double> p(n);
  for(int i=0; i<n; ++i){
    cin >> p[i];
    p[i]=(p[i]+1)/2;
  }
  double ma=0,sum=0;
  for(int i=0; i<n; ++i){
    sum+=p[i];
    if(i>=k) sum-=p[i-k];
    ma=max(sum,ma);
  }
  cout << fixed << setprecision(7) << ma << endl;
  return 0;
}