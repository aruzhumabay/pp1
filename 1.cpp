#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s;
    int num;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        s.push(num);
    }
    cout << "Stack (Top to Bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
