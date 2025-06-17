#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    int max_value=arr[0];
    int min_value=arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max_value){
            max_value=arr[i];
        }
        if(arr[i]<min_value){
            min_value=arr[i];
        }
    }
    cout<<"Max= "<<max_value<<endl;
    cout<<"Min= "<<min_value<<endl;
    return 0;
}