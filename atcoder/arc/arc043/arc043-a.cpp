#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,a,b;
  cin >> n >> a >> b;
  vector<double> s(n);
  for(int i=0; i<n; ++i) cin >> s[i];
  sort(all(s));
  double maxmin=s.back()-s.front();
  if(maxmin==0 && b>0) cout << "-1\n";
  else{
    vector<double> t(n);
    double p=b/maxmin;
    double ave=0;
    for(int i=0; i<n; ++i){
      t[i]=p*s[i];
      ave+=t[i];
    }
    ave/=n;
    double q=a-ave;
    cout << fixed << setprecision(15);
    cout << p << " " << q << endl;
  }
  return 0;
}