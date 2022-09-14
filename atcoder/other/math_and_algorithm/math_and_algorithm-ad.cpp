#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,x;
  cin >> n >> x;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  sort(all(a));
  
  int left=0,right=n-1;
  while(left<=right){
    int mid=(left+right)/2;
    if(a[mid]==x){
      cout << "Yes\n";
      return 0;
    }
    if(a[mid]>x) right=mid-1;
    if(a[mid]<x) left=mid+1;
  }
  cout << "No\n";
  return 0;
}