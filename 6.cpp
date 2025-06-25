#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
double average(const vector<int>& v){
    if(v.empty()) return 0;
    int sum = accumulate(v.begin(),v.end(),0);
    return(double)sum/v.size();
}
int main(){
    vector<int> v={10,20,30,40,50};
    cout<<"Average: "<<average(v)<<endl;
}