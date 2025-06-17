#include <iostream>
using namespace std;
int main(){
    int n,evencount=0,oddcount=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
            evencount++;
        else
            oddcount++;

            
        }
        cout<<"Even: "<<evencount<<endl;
        cout<<"Odd: "<<oddcount<<endl;
        return 0;

}