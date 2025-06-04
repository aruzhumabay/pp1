#include <iostream>
using namespace std;
int main(){
    float weight;
    float height;
    cin>>weight>>height;
    float BMI=weight/(height*height);
    cout<<"Your BMI is "<<BMI<<endl;
    return 0;
}