#include <iostream>
   #include <deque>
   #include <string>
   using namespace std; 
   int main(){
    string m;
    cin>>m;
    deque<char> dan;
    for(char x: m){
        dan.push_back(x);
    }
    bool ispalindrom = true;
    while(dan.size()>1){
        if(dan.front() != dan.back()){
            ispalindrom = false;
            break;
        }
        dan.pop_front();
        dan.pop_back();
    }
    if(ispalindrom){
        cout<<"It is a palindrome. ";
    }
    else{
        cout<<"no";
    }
    return 0;
   }