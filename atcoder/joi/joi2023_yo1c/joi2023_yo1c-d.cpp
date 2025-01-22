#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> a(n),t(n);
  for(int i=0; i<n; ++i){
   cin >> a[i];
   t[i]=a[i]; 
  }

  sort(all(t));
  map<int,int> tr;
  tr[t[0]]=1;
  for(int i=1; i<n; ++i){
    if(t[i]>t[i-1]) tr[t[i]]=i+1;
  }

  for(int i=0; i<n; ++i){
    cout << tr[a[i]] << endl;
  }
  return 0;
}