#include <iostream>

using namespace std;

unsigned long long gcd(unsigned long long n, unsigned long long m){
    while (n % m > 0){
        unsigned long long mod = n % m;
        n = m;
        m = mod;
    }
    return m;
}

int main(){
    unsigned long long n, m;
    cin >> n >> m;
    cout << gcd (n,m);
    return 0;
}