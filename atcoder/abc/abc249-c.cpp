#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    int N, K;
    cin >> N >> K;
    vector<set<char>> ss(N);
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        for(char c : s) ss[i].insert(c);
    }

    int ans = 0;
    for(int i = 0; i < (1 << N); i++){

        set<char> c;
        for(char j = 'a'; j <= 'z'; j++){
            int count = 0;
            for(int bit = 0; bit < N; bit++){
                if(i & (1 << bit)){
                    if(ss[bit].count(j)) count++;
                }
            }
            if(count == K) c.insert(j);
        }
        chmax(ans, (int)c.size());

        /*
        cerr << i << " ";
        for(char k : c) cerr << k << " ";
        cerr << endl;
        */
    }

    cout << ans << endl;
    return 0;
}