#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    deque<int> a;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L') a.push_front(i + 1);
        if(s[i] == 'R') a.push_back(i + 1);
        if(s[i] == 'A'){
            if((int)a.size() <= 0) cout << "ERROR\n";
            else{
                cout << a.front() << endl;
                a.pop_front();
            }
        }
        if(s[i] == 'B'){
            if((int)a.size() <= 1) cout << "ERROR\n";
            else{
                int x = a.front();
                a.pop_front();
                cout << a.front() << endl;
                a.pop_front();
                a.push_front(x);
            }
        }
        if(s[i] == 'C'){
            if((int)a.size() <= 2) cout << "ERROR\n";
            else{
                int x = a.front();
                a.pop_front();
                int y = a.front();
                a.pop_front();
                cout << a.front() << endl;
                a.pop_front();
                a.push_front(y);
                a.push_front(x);
            }
        }
        if(s[i] == 'D'){
            if((int)a.size() <= 0) cout << "ERROR\n";
            else{
                cout << a.back() << endl;
                a.pop_back();
            }
        }
        if(s[i] == 'E'){
            if((int)a.size() <= 1) cout << "ERROR\n";
            else{
                int x = a.back();
                a.pop_back();
                cout << a.back() << endl;
                a.pop_back();
                a.push_back(x);
            }
        }
        if(s[i] == 'F'){
            if((int)a.size() <= 2) cout << "ERROR\n";
            else{
                int x = a.back();
                a.pop_back();
                int y = a.back();
                a.pop_back();
                cout << a.back() << endl;
                a.pop_back();
                a.push_back(y);
                a.push_back(x);
            }
        }
    }
    return 0;
}