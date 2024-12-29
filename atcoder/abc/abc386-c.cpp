#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int k;
    string s, t;
    cin >> k >> s >> t;

    int ss = s.size(), ts = t.size();
    if(abs(ss - ts) >= 2){
        cout << "No\n";
        return 0;
    }
    else if(ss == ts){
        for(int i = 0; i < ss; i++){
            if(s[i] != t[i]) k--;
        }
    }
    else if(ss == ts + 1){
        int i = 0;
        for(int j = 0; j < ts; j++){
            if(s[i] != t[j]) k--, i+=2;
            else i++;
        }
    }
    else if(ss == ts - 1){
        int j = 0;
        for(int i = 0; i < ss; i++){
            if(s[i] != t[j]) k--, j+=2;
            else j++;
        }
    }
    cout << (k >= 0 ? "Yes\n" : "No\n");
    return 0;
}
