#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string word;
    cin>> word;
    stack<char> letters;
    for(char d : word ){
        letters.push(d);
    }
    while(!letters.empty()){
        cout<<letters.top();
        letters.pop();

    }
      return 0;
}
