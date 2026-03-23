#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0 ;
        int right = nums.size() -1;
        vector<int> ans ;
        int sum = 0;
        while(left < nums.size()){
            sum = nums[left] + nums[right] ;
            if(sum == target){
                ans.push_back(left);
                ans.push_back(right);
                ans[0] = left + 1;
                ans[1] = right +1;
                return ans;
            }else if(sum  < target){
                left++;
            }else{
                right--;
            }
        }
        return ans;
      }};


int main() {
    vector<int> arr = {2,7,11,15};
    Solution s1 ;
    vector<int> result = s1.twoSum(arr , 9);

    cout << "result : ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}