#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int start = 0 , end = n - 1;
        vector<int> result(n  , 0);
        for(int j = n-1 ; j >= 0 ; j--){
            if(abs(nums[start]) > abs(nums[end])){
                result[j] = nums[start] * nums[start];
                start++;
            }else{
                result[j] = nums[end] * nums[end];
                end--;
            }
        }
        return result;
    }
};

 int main() {
    vector<int> arr = {-4, -1, 0, 3, 10};
    Solution s1;

    vector<int> ans = s1.sortedSquares(arr);   

    for (int x : ans) {                      
        cout << x << " ";
    }

    return 0;
}