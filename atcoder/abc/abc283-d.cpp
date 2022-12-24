#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  int n=s.size();
  vector<set<char>> box(1);
  int c=0;
  for(int i=0; i<n; ++i){
    if(s[i]=='('){
      box.push_back(set<char>());
      c++;
    }
    else if(s[i]==')'){
      box[c].clear();
      c--;
    }
    else{
      if(box[c].count(s[i])){
        cout << "No\n";
        return 0;
      }
      else box[c].insert(s[i]);
    }
  }
  cout << "Yes\n";
  return 0;
}