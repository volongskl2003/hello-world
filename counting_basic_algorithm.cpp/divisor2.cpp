#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string check(string num){
    string n = num;
    if (num.size() % 3 == 1){
        n = "00" + num;
    }else if (num.size() % 3 == 2){
        n = "0" + num;
    }
    int sum = 0;
    int p = 1;
    for(int i = n.size() - 1; i>=0; i -= 3){
        int group = 0;
        group += (n[i] - 48) + (n[i-1]-48)*10 + (n[i-2]-48)*100;
        sum += group * p;
        p *= -1;
    }
    if (abs(sum) % 13 ==0 ){
        return "YES";
    }else{
        return "NO";
    }
}

int main(){
    string num;
    cin >> num; 
    cout << check(num);
    return 0;
}