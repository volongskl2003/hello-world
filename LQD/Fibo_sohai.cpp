#include <iostream>

using namespace std;

bool check_fibona(unsigned long long num){
    unsigned long long first = 0;
    unsigned long long second = 1;
    while (second <= num){
        if (second == num){
            return true;
        }
        unsigned long long sum = first + second;
        unsigned long long change = second;
        second = sum;
        first = change;
    }
    return false;
}


int main(){
    unsigned long num;
    cin >> num;
    unsigned long long arr[100000];
    for (unsigned long i = 0; i < num; i++){
        cin >> arr[i];
    } 
    for (unsigned long i = 0; i < num; i++){
        if (check_fibona(arr[i]) == 1){
            cout << "IsFibo" << endl;
        }
        else{
            cout << "IsNotFibo" << endl;
        }
    }
    return 0;
}