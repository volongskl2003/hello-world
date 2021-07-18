#include <iostream>
#include <cmath>
using namespace std;

unsigned long long tong_uoc (unsigned long long n){
    int sum = 1 + n;
    for (int i = 2; i <= round(sqrt(n)); i++){
        if (n % i == 0){
            sum += i + n/i;
        }
    }
    return sum;
}

int uoc_so(unsigned long long n){
    int count = 2;
    for (int i = 2; i <= round(sqrt(n)); i++){
        if (n % i == 0){
            count += 2;
        }
    }
    return count;
}

int main(){
    unsigned long long n;
    cin >> n;
    cout << uoc_so(n) << " " << tong_uoc(n);
    return 0;
}   