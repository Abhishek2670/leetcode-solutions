#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            if(nums[i] == 9) nums[i] = 0;
            else {nums[i]++; break;}
        }
        if(nums[0] == 0){
            vector<int> result(nums.size() + 1 , 0);
            result[0] = 1;
            return result;

        }

        return nums;
    }
};
int main() {
  vector<int> arr = {1,9,9};

   Solution s1 ;
   vector<int> result =s1.plusOne(arr);
   for(int num: result){
    cout<<num<<" ";
   }
    
    return 0;
}