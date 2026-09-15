#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(isalnum(s[i]))
            {
                temp += (tolower(s[i]));
            }
            cout << temp ;
            return 1;
        }
    }
};

int main()
{
    // Solution s;
    string s = "s wwaS";
    string temp = "";
    for(int i = s.size() -1; i >= 0 ; i++)
    {
        if(isalnum(s[i]))
        {
            temp += tolower(s[i]);
        }
        
    }
    cout << temp ;
    
}