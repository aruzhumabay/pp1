#include <iostream>
#include <map>
#include <sstream>
using namespace std;
int main(){
    string text = "this is a test this only a test";
    map<string,int>freq;
    string word;
    stringstream ss(text);
    while(ss>>word)
        freq[word]++;
    for(auto pair : freq)
        cout<<pair.first<<"->"<<pair.second<<endl;

}