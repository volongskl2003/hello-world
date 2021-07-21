#include <iostream>
#include <vector>

using namespace std;

unsigned long long getNthUglyNo(int n) {
    int count = 0;
    int index_2 = 0;
    int index_3 = 0;
    int index_5 = 0;
    
    unsigned long long ugly[n];
    ugly[0] = 1;
    while (n > count){
        unsigned long long next = min(min(ugly[index_2] * 2, ugly[index_3] * 3), ugly[index_5] *5);
        if (next == ugly[index_2] * 2){
            index_2++;
        }
        if (next == ugly[index_3] * 3){
            index_3++;
        }
        if (next == ugly[index_5] * 5){
            index_5++;
        }
        count++;
        ugly[count] = next;
    }
    unsigned long long c = ugly[n-1];
    return c;
}

int main(){
    int num;
    cin >> num;
    cout << getNthUglyNo(num);
    return 0;
}