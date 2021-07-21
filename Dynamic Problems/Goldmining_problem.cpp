#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int maxGold(int n, int m, vector<vector<int>> M){
    vector<vector<int>> sum (n, vector<int> (m));
    for (int column = m - 1; column >=0 ; column--){
        for (int row = 0; row < n; row++){
            int right = 0;
            int right_up = 0;
            int right_down = 0;
            if (column == m-1){
                right = 0;
            }else{
                right = sum[row][column+1];
            }

            if (row == 0 || column == m-1){
                right_up = 0;
            }else{
                right_up = sum[row-1][column+1];
            }

            if (row == n-1 || column == m-1){
                right_down = 0;
            }else{
                right_down = sum[row+1][column+1];
            }


            sum[row][column] = M[row][column] + max(right, max(right_up, right_down));
        }
    }  
    int max = sum[0][0];
    for (int row = 1; row < n; row ++){
        if (sum[row][0] >= max){
            max = sum[row][0];
        }
    }      
    return max;
}



int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec (n,  vector<int> (m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> vec[i][j];
        }
    }
    cout << endl;
    cout << maxGold(n, m, vec);
    return 0;



}