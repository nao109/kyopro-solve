string n2m(int n, string s, int m){
    reverse(s.begin(), s.end());
    for(char i : s){
        if(i >= 'a' && i <= 'f') i -= 32;
    }

    if(s == "0") return "0";

    long long num = 0, kn = 1;
    for(char i : s){
        if(i >= 'A' && i <= 'F') num += (i - 'A' + 10) * kn;
        else num += (i - '0') * kn;
        kn *= n;
    }

    string res = "";
    while(num > 0){
        if(num % m >= 10) res.push_back('A' + num % m - 10);
        else res.push_back('0' + num % m);
        num /= m;
    }
    reverse(res.begin(), res.end());
    return res;
}
