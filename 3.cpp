#include <iostream>
using namespace std;
string reverseString(string s) {
    if (s.length() <= 1)
        return s;
    return reverseString(s.substr(1)) + s[0];
}
int main() {
    string input = "hello";
    cout << "Output: " << reverseString(input) << endl;
    return 0;
}
