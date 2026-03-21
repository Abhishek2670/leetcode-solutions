#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
      if(n == 0 || n ==1){
        return n;
      } 
      return fib(n-1)+fib(n-2);
    }
};

int main() {
    
  Solution s1;
  int result = s1.fib(6);
  cout<< result << endl;
    
    return 0;
}