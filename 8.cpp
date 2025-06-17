#include <iostream>
using namespace std;
int main(){
    int a[4][4];
    for(int i = 0;i < 4;i++)
        for(int j = 0;j < 4;j++)
            cin>>a[i][j];
    int maxSum = 0,rowIndex = 0;

    for(int i = 0; i < 4; i++){
        int rowSum = 0;
        for(int j = 0;j < 4;j++)
            rowSum += a[i][j];

        if(rowSum > maxSum){
            maxSum = rowSum;
            rowIndex = i;
        }
    }
    cout << "Row " << rowIndex + 1 << " has the maximum sum: " << maxSum << endl;
    return 0;
}