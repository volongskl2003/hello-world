#include <iostream>

using namespace std;

int nd_power(int n){ //Lay chu so cuoi cung cua 2^x
    switch (int i = n%4){
        case 1:
            return 2;
        case 2: 
            return 4;
        case 3: 
            return 8;
        default: //Truong hop chia het 0:
            return 6;
    }
}

int last_digit_factorial(int n){
    int fac = 1;
    for (int i = 1; i <= n; i++){
        fac *= i;
    }
    while (fac > 0){
        if (fac % 10 != 0){
            return fac %10 ; 
        }else{
            fac = fac/10;
        }
    }
}

long long lastdigitdif0 (int n){
    if (n == 1 || n == 0){
        return 1;
    }else{
        int quotient = n / 5; //Chia lay so nguyen
        int remain = n % 5; //Chia lay so du
        return ((nd_power(quotient))*(last_digit_factorial(remain)))*(lastdigitdif0(quotient))%10;
    }           
}

int main(){
    long long n;
    cin >> n;
    cout << endl;
    cout << lastdigitdif0(n);
    return 0;
}
