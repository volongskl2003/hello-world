#include <iostream>
#include <cmath>
using namespace std;

string check_snt(unsigned long long num){
    if (num <= 1){
        return "NO";
    }
    for (int i = 2; i <= round(sqrt(num)); i++){
        if (num % i == 0){
            return "NO";
            break;
        }
    }
    return "YES";
}
int main(){
    long long num;
    cin >> num;
    cout << check_snt(num);
    return 0;
}