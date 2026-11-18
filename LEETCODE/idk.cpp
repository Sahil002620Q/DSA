#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {  ///half the power 
       double guess = 0;
       double inc = 0.0001; 
       while(guess*guess < x) 
       {
            guess = guess + inc;
       }
       return guess;
    }
};

int main () {
    Solution s;
    int root = s.mySqrt(2912);
    cout << root ;
}

// int mySqrt(int x) {  ///half the power 
//         float root = sqrt(x) ;
//         return root;   
//     }