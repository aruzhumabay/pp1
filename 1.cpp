#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> nums;
    int n, x;
    cout << "Enter how many numbers you want to input: ";
    cin >> n;
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());

    cout << "Sorted vector: ";
    for (int val : nums) cout << val << " ";
    cout << endl;
    cout << "Min: " << nums.front() << endl;
    cout << "Max: " << nums.back() << endl;
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    cout << "Without duplicates: ";
    for (int val : nums) cout << val << " ";
}
