#include <iostream>

using namespace std;

bool isPowerOfFour(long long n)
{
    int t = 0;
    while (n > 1){
        t = n % 4;
        n = n / 4;   
    }
    if (t == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    long long n ;
    cout << isPowerOfFour(n);
}