#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    char ab, ac, bc, ans;
    cin >> ab >> ac >> bc;
    if(ab == '<' && ac == '<' && bc == '<') ans = 'c';
    if(ab == '>' && ac == '<' && bc == '<') ans = 'c';
    if(ab == '>' && ac == '>' && bc == '<') ans = 'a';
    if(ab == '>' && ac == '>' && bc == '>') ans = 'a';
    if(ab == '<' && ac == '<' && bc == '>') ans = 'b';
    if(ab == '<' && ac == '>' && bc == '>') ans = 'b';
    return 0;
}
