#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int>num;
    for(int i=0;i<5;i++){
        int d;
        cin>>d;
        num.push(d);
    }
    cout<<"Dequeued: ";
    while(!num.empty()){
        cout<<num.front()<<" ";
        num.pop();
    }
    return 0;
}