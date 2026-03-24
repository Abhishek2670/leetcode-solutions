#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 ;
        int right = height.size() - 1 ;
        int maxArea = 0;
        while(left < right){
            int currArea = min(height[left],height[right])* (right - left );
            // int Areacal = currArea * (right - left ) ;
            maxArea = max(maxArea,currArea);
            if(height[left] > height[right]){
                right--;
            }else{
                left++;
            }
        }
        return maxArea;
    }
};

int main() {
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    Solution s1;
    int result = s1.maxArea(arr);
    cout << result;
    
    return 0;
}