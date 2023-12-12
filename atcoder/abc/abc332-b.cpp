#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int k, G, M;
    cin >> k >> G >> M;

    int g = 0, m = 0;
    for(int i = 0; i < k; i++){
        if(g == G) g = 0;
        else if(m == 0) m = M;
        else{
            if(g + m <= G){
                g += m;
                m = 0;
            }
            else{
                m -= G - g;
                g = G;
            }
        }
    }

    cout << g << " " << m << endl;
    return 0;
}