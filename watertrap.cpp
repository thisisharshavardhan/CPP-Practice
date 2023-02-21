#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
         int i = 0, j = 0, result = 0;
        int n = height.size();

        while (i < n) {
            while (i < n && height[i] == 0) {
                i++;
            }
            j = i + 1;
            int max_height = 0;
            while (j < n && height[j] < height[i]) {
                max_height = max(max_height, height[j]);
                j++;
            }
            if (j < n && height[j] >= height[i]) {
                result += (j - i - 1) * (height[i] - max_height);
                i = j;
            } else {
                i++;
            }
        }
        return result;
    }
};

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution sol;
    int trapped_water = sol.trap(height);
    cout << "The amount of trapped water is: " << trapped_water << endl;
    return 0;
}
