#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string s,t;
  rep(i,3){char a; cin >> a; s.push_back(a);}
  rep(i,3){char a; cin >> a; t.push_back(a);}
  if(s=="RGB"){
    if(t=="RGB") cout << "Yes\n";
    else if(t=="RBG") cout << "No\n";
    else if(t=="GRB") cout << "No\n";
    else if(t=="GBR") cout << "Yes\n";
    else if(t=="BRG") cout << "Yes\n";
    else if(t=="BGR") cout << "No\n";
  }
  else if(s=="RBG"){
    if(t=="RGB") cout << "No\n";
    else if(t=="RBG") cout << "Yes\n";
    else if(t=="GRB") cout << "Yes\n";
    else if(t=="GBR") cout << "No\n";
    else if(t=="BRG") cout << "No\n";
    else if(t=="BGR") cout << "Yes\n";
  }
  else if(s=="GRB"){
    if(t=="RGB") cout << "No\n";
    else if(t=="RBG") cout << "Yes\n";
    else if(t=="GRB") cout << "Yes\n";
    else if(t=="GBR") cout << "No\n";
    else if(t=="BRG") cout << "No\n";
    else if(t=="BGR") cout << "Yes\n";
  }
  else if(s=="GBR"){
    if(t=="RGB") cout << "Yes\n";
    else if(t=="RBG") cout << "No\n";
    else if(t=="GRB") cout << "No\n";
    else if(t=="GBR") cout << "Yes\n";
    else if(t=="BRG") cout << "Yes\n";
    else if(t=="BGR") cout << "No\n";
  }
  else if(s=="BGR"){
    if(t=="RGB") cout << "No\n";
    else if(t=="RBG") cout << "Yes\n";
    else if(t=="GRB") cout << "Yes\n";
    else if(t=="GBR") cout << "No\n";
    else if(t=="BRG") cout << "No\n";
    else if(t=="BGR") cout << "Yes\n";
  }
  else if(s=="BRG"){
    if(t=="RGB") cout << "Yes\n";
    else if(t=="RBG") cout << "No\n";
    else if(t=="GRB") cout << "No\n";
    else if(t=="GBR") cout << "Yes\n";
    else if(t=="BRG") cout << "Yes\n";
    else if(t=="BGR") cout << "No\n";
  }
  return 0; 
}