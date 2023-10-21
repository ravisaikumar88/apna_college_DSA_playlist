#include <iostream>
#include <deque>
#include <vector>

using namespace std;

vector<int> slidingWindowMaximum(const vector<int>& nums, int k) {
    vector<int> result;
    deque<int> window;

    for (int i = 0; i < nums.size(); i++) {
        // Remove elements that are out of the current window
        while (!window.empty() && window.front() <= i - k) {
            window.pop_front();
        }

        // Remove smaller elements from the back of the window
        while (!window.empty() && nums[i] >= nums[window.back()]) {
            window.pop_back();
        }

        // Add the current element's index to the window
        window.push_back(i);

        // Add the maximum element in the window to the result
        if (i >= k - 1) {
            result.push_back(nums[window.front()]);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = slidingWindowMaximum(nums, k);

    cout << "Sliding Window Maximum: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
