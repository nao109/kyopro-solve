#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  string ch[16];
  ch[0]="KIHBR";
  ch[1]="KIHBRA";
  ch[2]="KIHBAR";
  ch[3]="KIHBARA";
  ch[4]="KIHABR";
  ch[5]="KIHABRA";
  ch[6]="KIHABAR";
  ch[7]="KIHABARA";
  ch[8]="AKIHBR";
  ch[9]="AKIHBRA";
  ch[10]="AKIHBAR";
  ch[11]="AKIHBARA";
  ch[12]="AKIHABR";
  ch[13]="AKIHABRA";
  ch[14]="AKIHABAR";
  ch[15]="AKIHABARA";
  rep(i,16){
    if(s==ch[i]){
      cout << "Yes\n"; return 0;
    }
  }
  cout << "No\n"; return 0;
  return 0;
}