#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isBalanced(string expr){
    stack<char>st;
    for(char c: expr){
        if(c=='(') st.push(c);
        else if(c==')'){
            if(st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    string s;
    cout<<"Enter expression: ";
    cin>>s;
    if (isBalanced(s))
        cout<<"Correct";
    else
        cout<<"Incorrect";
    return 0; 
}