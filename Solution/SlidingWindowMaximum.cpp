#include <iostream>
#include<vector>
#include<deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> result;
        for(int right = 0 ; right < nums.size(); right++){
          if(!q.empty() && q.front()  < right - k){
            q.pop_front();
          }
          while(!q.empty() && nums[q.back()] < nums[right]){
            q.pop_back();
          }
          q.push_back(right);
          if(right >= right - k){
              result.push_back(nums[q.front()]);
          }
        }
        return result;
    }
};

int main() {
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    Solution s1 ;
    vector<int> res = s1.maxSlidingWindow(nums,k);
    for(int it : res){
      cout << it << " ";
    }
    
    return 0;
}