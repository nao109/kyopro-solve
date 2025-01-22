#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<string> s1, s2;
  vector<vector<char>> a(n, vector<char>(n));
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      cin >> a[i][j];
    }
  }
  string t1, t2;
  for(int i=0; i<n; ++i){
    t1="", t2="";
    for(int j=0; j<n; ++j){
      t1+=a[i][j];
      t2+=a[j][i];
    }
    s1.push_back(t1);
    reverse(all(t1));
    s1.push_back(t1);
    
    s1.push_back(t2);
    reverse(all(t2));
    s1.push_back(t2);
  }

  int ss1=s1.size();
  for(int i=0; i<ss1; ++i){
    t1=s1[i], t2=s1[i];
    reverse(all(t2));
    for(int j=0; j<n-1; ++j){
      t1=t1.back()+t1;
      t1.pop_back();
      s1.push_back(t1);
      t2=t2.back()+t2;
      t2.pop_back();
      s1.push_back(t2);
    }
  }

  for(int i=0; i<n; ++i){
    t1="";
    int x=i,y=0;
    while(x-i<n){
      t1+=a[x%n][y];
      x++,y++;
    }
    s2.push_back(t1);
    reverse(all(t1));
    s2.push_back(t1);
  }
  
  for(int j=0; j<n; ++j){
    t1="";
    int x=0,y=j;
    while(y-j<n){
      t1+=a[n-1-x][y%n];
      x++,y++;
    }
    s2.push_back(t1);
    reverse(all(t1));
    s2.push_back(t1);
  }
  
  int ss2=s2.size();
  for(int i=0; i<ss2; ++i){
    t1=s2[i], t2=s2[i];
    reverse(all(t2));
    for(int j=0; j<n-1; ++j){
      t1=t1.back()+t1;
      t1.pop_back();
      s2.push_back(t1);
      t2=t2.back()+t2;
      t2.pop_back();
      s2.push_back(t2);
    }
  }

  vector<string> s;
  for(string &i:s1) s.push_back(i);
  for(string &i:s2) s.push_back(i);
  sort(all(s));
  cout << s.back() << endl;
  return 0;
}