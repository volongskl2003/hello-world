#include <iostream>

using namespace std;

string check_year(int n){
    if (n % 4 == 0 && n % 100 !=0){
        return "YES";
    }else if (n % 400 == 0){
        return "YES";
    }else{
        return "NO";
    }
}

int main(){
    int num, arr[10];
    cin >> num;
    for (int i = 0; i < num ; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++){
        cout << check_year(arr[i]) << endl;
    }
    return 0;
}