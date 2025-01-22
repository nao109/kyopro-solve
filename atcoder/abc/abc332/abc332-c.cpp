#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
template <typename T> bool chmax(T &a, const T& b) {
    if(a < b){
        a = b;
        return true;
    }
    return false;
}
template <typename T> bool chmin(T &a, const T& b) {
    if(a > b){
        a = b;
        return true;
    }
    return false;
}
int main(){
    int n, m;
    string s;
    cin >> n >> m >> s;

    int meal = 0, max_meal = 0;
    int onsite = 0, max_onsite = 0;
    int event = 0, max_event = 0;
    int buy = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            meal++;
            event++;
        }
        if(s[i] == '2'){
            onsite++;
            event++;
        }
        else if(s[i] == '0'){
            if(meal > m){
                chmax(buy, meal - m + onsite);
            }
            else{
                chmax(buy, onsite);
            }
            meal = 0;
            onsite = 0;
            event = 0;
        }
    }

    cout << buy << endl;
    return 0;
}