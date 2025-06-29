#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
    queue<string> names;
    for(int i=0;i<3; i++){
        string name;
        cin>> name;
        names.push(name);
    }
    while(!names.empty()){
        cout<<" Serving: " << names.front()<< endl;
        names.pop();
    }
    return 0;
}
