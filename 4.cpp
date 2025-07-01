#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main() {
    vector<int> nums = {4, 1, 2, 4, 6, 4, 3};
    int value = 4;
    int freq = count(nums.begin(), nums.end(), value);
    int minVal = *min_element(nums.begin(), nums.end());
    int maxVal = *max_element(nums.begin(), nums.end());

    cout << "Input: ";
    for (int n : nums) cout << n << " ";
    cout << endl;
    cout << "Find frequency of: " << value << endl;
    cout << "Output:" << endl;
    cout << "Count of " << value << ": " << freq << endl;
    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;

    return 0;
}
