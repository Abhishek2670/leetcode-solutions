#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> s;
        long long sum = 0 , result = 0;
        int left = 0 , right = 0;
        for(right = 0 ; right < nums.size() ; right++){
            while( s.find(nums[right]) != s.end()){
                s.erase(nums[left]);
                sum -= nums[left];
                left++;
            }

            s.insert(nums[right]);
            sum += nums[right];

            if(right - left + 1 > k ){
                s.erase(nums[left]);
                sum-= nums[left];
                left++;
            }
            if(right - left + 1  == k ){
                result = max(result , sum);
            }
        }
        return result;
    }
};

int main() {
    vector<int> arr = {1,5,4,2,9,9,9};
    Solution s1 ;
    cout << s1.maximumSubarraySum(arr , 3);

    return 0;
}