#include <iostream>
#include <string>
using namespace std;

class Solution{
  public:
    string mergeStringAlternate(string word1,string word2){
      string result ="";
      int i = 0;
      while(i < word1.length() || i < word2.length()){
        if(i < word1.length()){
          result += word1[i];
        }
        if(i < word1.length()){
          result += word2[i];
        }
        i++;
      }
      return result;
    }
};

int main() {
    string word1 = "abcd";
    string word2 = "pq";

    Solution s1 ;
    string result = s1.mergeStringAlternate(word1,word2);
    for(auto it : result){
      cout<<it ;
    }
    
    return 0;
}