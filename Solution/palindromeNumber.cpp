#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0) return false;

        long rev = 0;
        int original = x;

        while(x > 0){
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }

        return rev == original;
    }
};

int main() {
    Solution s1;
    bool ans = s1.isPalindrome(121);
    cout << ans;
    return 0;
}