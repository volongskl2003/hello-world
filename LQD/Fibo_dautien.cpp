#include <iostream>

using namespace std;

void first_fibo(unsigned long long n){
    unsigned long long first = 0;
    unsigned long long second = 1;
    cout << second << " ";
    for (int i = 1 ; i < n; i++){
        unsigned long long sum = first + second;
        cout << sum << " ";
        unsigned long long change = second;
        second = sum;
        first = change;
    }
}

int main(){
    unsigned long long n;
    cin >> n;
    first_fibo(n);
    return 0;
}