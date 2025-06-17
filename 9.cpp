#include <iostream>
using namespace std;
int main(){
    int a[4][4];
    for (int i = 0;i < 4;i++)
        for (int j = 0;j < 4;j++)
            cin>>a[i][j];
    cout << "Main: ";
    for (int i = 0; i < 4; i++)
        cout << a[i][i] << " ";
    cout << endl;
    cout << "Secondary: ";
    for (int i = 0; i < 4; i++)
        cout << a[i][3 - i] << " ";
    cout << endl;
    return 0;
}