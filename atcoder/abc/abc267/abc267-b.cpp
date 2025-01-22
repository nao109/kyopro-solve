#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string c;
  cin >> c;
  vector<bool> s(10,false);
  for(int i=0; i<10; ++i){
    if(c[i]=='1') s[i]=true;
  }
  if(s[0]){
    cout << "No\n";
    return 0;
  }
  
  if(!s[3] && s[6]){
    if(s[1] || s[7] || s[0] || s[4] || s[2] || s[8] || s[5] || s[9]){
      cout << "Yes\n";
      return 0;
    }
    else cout << "No\n";
  }
  if(!s[1] && !s[7]){
    if(s[6] || s[3]){
      if(s[0] || s[4] || s[2] || s[8] || s[5] || s[9]){
        cout << "Yes\n";
        return 0;
      }
    }
    else cout << "No\n";
  }
  if(!s[0] && !s[4]){
    if(s[6] || s[3] || s[1] || s[7]){
      if(s[2] || s[8] || s[5] || s[9]){
        cout << "Yes\n";
        return 0;
      }
    }
    else cout << "No\n";
  }
  if(!s[2] && !s[8]){
    if(s[6] || s[3] || s[1] || s[7] || s[0] || s[4]){
      if(s[5] || s[9]){
        cout << "Yes\n";
        return 0;
      }
    }
    else cout << "No\n";
  }
  if(!s[5] && s[9]){
    if(s[6] || s[3] || s[1] || s[7] || s[0] || s[4] || s[2] || s[8]){
      cout << "Yes\n";
      return 0;
    }
    else cout << "No\n";
  }
  return 0;
}