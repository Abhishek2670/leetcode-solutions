#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();

        vector<int> frequency(n + 1, 0);

        for (int val : nums) {
            frequency[val]++;
        }

        int missing = -1;
        int repeating = -1;

        for (int idx = 1; idx <= n; idx++) {

            if (frequency[idx] > 1) {
                repeating = idx;
            }
            else if (frequency[idx] == 0) {
                missing = idx;
            }
        }

        return vector<int>{repeating, missing};
    }
};

int main() {
   vector<int> nums = {1,2,2,4};
    Solution s1;
    vector<int> result = s1.findErrorNums(nums);
    for(int x: result){
      cout << x <<" ";
    }
    
    return 0;
}