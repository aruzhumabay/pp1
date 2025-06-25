#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    for (int i=1;i<=20;i++)
        v.push_back(i);
    reverse(v.begin(),v.end());
    int even=count_if(v.begin(),v.end(),[](int n){
        return n%2==0;
    });
    cout<<"Even count: "<<even<<endl;
    v.erase(remove_if(v.begin(), v.end(),[](int n){
        return n%3==0;
    }), v.end());
    cout<<"Without divisible by 3: ";
    for(int n:v)
        cout<<n<<" ";
        
}