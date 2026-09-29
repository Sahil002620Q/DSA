#include <iostream>
#include <vector>
using namespace std;
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string temp = "";
//         for(int i = 0; i < s.size(); i++)
//         {
//             if(isalnum(s[i]))
//             {
//                 temp += (tolower(s[i]));
//             }
//             cout << temp ;
//             return 1;
//         }
//     }
// };

class Solution {
public:
    bool isPalindrome(string s) 
    {
        int left  = 0;
        int right = s.size()-1;
        while(left<right)
        {
            if(s[left] == ' ' || !isalnum(s[left]))
            {
                left++;
            }

            if(s[right] == ' ' || !isalnum(s[right]))
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