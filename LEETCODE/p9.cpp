#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int copy = x;
        long long rev = 0;
        while(copy != 0)
        {
            int last = copy%10;            
            rev = rev*10 + last; 
            copy = copy/10;
        }
         
        return x == rev;
    }
};

int main()
{
    // int num = 14321;
    // int copy = num;
    // int rev = 0;
    // while(copy != 0)
    // {
    //     //last digit 
    //     int last = copy%10;
        
    //     rev = rev*10 + last; //rev is now 1
    //     copy = copy/10;
    // }
    // cout << rev;
    Solution s;
    cout << s.isPalindrome(919) << endl;
    cout << s.isPalindrome(199) << endl;
    cout << s.isPalindrome(121) << endl;
    cout << s.isPalindrome(-121) << endl;
    cout << s.isPalindrome(99) << endl;
    cout << s.isPalindrome(99) << endl;
}