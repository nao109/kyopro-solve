#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
	int n = s.size();
	mint ans = 1;
	for(int i = 0; i < (n + 1) / 2; i++){
		if(s[i] == '?' && s[n - 1 - i] == '?'){
			ans *= 26;
		}
		if(s[i] != '?' && s[n - 1 - i] != '?' && s[i] != s[n - 1 - i]){
			cout << 0 << endl;
			return 0;
		}
	}
    cout << ans.val() << endl;
    return 0;
}