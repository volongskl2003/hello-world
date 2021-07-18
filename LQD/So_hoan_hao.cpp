#include <iostream> 
#include <cmath>
using namespace std;

unsigned long long tong_uoc (unsigned long long n){
    int sum = 1 + n;
    for (int i = 2; i <= round(sqrt(n)); i++){
        if (pow(i,2) == n){
            sum += i;
        }else if (n % i == 0){
            sum += i + n/i;
        }
    }
    return sum;
}

int main(){
    unsigned long long num;
    cin >> num;
    if (2 * num == tong_uoc(num)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}