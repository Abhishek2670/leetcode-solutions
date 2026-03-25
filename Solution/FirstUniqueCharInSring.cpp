#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
       unordered_map<char,int> feq;
       for(int i = 0 ; i < n ; i++){ 
        feq[s[i]]++;
       }

       for(int i = 0 ; i < n ; i++){
        if(feq[s[i]] == 1 ){
            return i;
        }
       }
       return -1;
    }
};

int main() {
    Solution s1;
    string test = "leetcode";
    int result = s1.firstUniqChar(test);
    cout << "First unique character index: " << result << endl;
    return 0;
}