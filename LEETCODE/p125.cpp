#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) 
    {
        int left  = 0;
        int right = s.size()-1;
        while(left<right)
        {
            while((s[left] == ' ' || !isalnum(s[left]))&& left<right)
            {
                left++;
            }

            while((s[right] == ' ' || !isalnum(s[right]))&&left<right)
            {
                right--;
            }

            if(tolower(s[left]) == tolower(s[right]))
            {
                left++;
                right--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    string str = "A man, a plan, a canal: Panama";
    cout << (s.isPalindrome(str) ? "yes" : "no");
}