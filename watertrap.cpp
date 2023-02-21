#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 2) {
            return 0;
        }
        vector<int> left(n), right(n);
        left[0] = height[0];
        for (int i = 1; i < n; i++) {
            left[i] = max(left[i - 1], height[i]);
        }
        right[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], height[i]);
        }
        int trapped_water = 0;
        for (int i = 0; i < n; i++) {
            trapped_water += min(left[i], right[i]) - height[i];
        }
        return trapped_water;
    }
};


int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution sol;
    int trapped_water = sol.trap(height);
    cout << "The amount of trapped water is: " << trapped_water << endl;
    return 0;
}
