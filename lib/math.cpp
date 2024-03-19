long long fact(long long n){
    long long res = 1;
    for(long long i = 1; i <= n; i++) res *= i;
    return res;
}

long long nPr(long long n, long long r){
    return fact(n) / fact(n - r);
}

long long nCr(long long n, long long r){
    return fact(n) / (fact(n - r) * fact(r));
}

bool isprime(long long n){
    if(n < 2) return false;
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
