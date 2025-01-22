#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  sort(all(s));
  bool make8=false;
  
  if(stoi(s)<1000){
    do{
      if(stoi(s)%8==0) make8=true;
    }while(next_permutation(all(s)));
    cout << (make8 ? "Yes\n" : "No\n");
    return 0;
  }
  
  vector<int> sv(10);
  for(char i:s) sv[i-'0']++;
  for(int i=112; i<=992; i+=8){
    make8=true;
    vector<int> iv(10);
    for(char i:to_string(i)) iv[i-'0']++;
    
    for(int i=0; i<10; ++i){
      if(sv[i]<iv[i]) make8=false;
    }
    
    if(make8) break;
  }
  cout << (make8 ? "Yes\n" : "No\n");
  return 0;
}