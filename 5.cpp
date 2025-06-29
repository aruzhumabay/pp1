#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main(){
    deque<int> num;
    for(int i=0;i<3;i++){
        int d;
        cin>>d;
        num.push_back(d);
    }
    sort(num.begin(),num.end());
    for(int rev_num : num ){
        cout << rev_num<<" ";
    }
    cout<< endl;
    cout<<"Pop back: "<< num.back()<< endl;
    num.pop_back();
    cout<<"Pop front: "<< num.front()<< endl;
    num.pop_front();
    cout<< "Remaining: ";
    for(int x: num){
        cout<< x<<" ";

    }
    cout << endl;
}
