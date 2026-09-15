#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int romanToInt(string s) 
    {
        int val = 0;
        for (int i = s.size() -1 ; i >= 0; i--)
        {
            if(s[i] == 'I' ) val += 1; 
            if(s[i] == 'V' ) val += 5; 
            if(s[i] == 'X' ) val += 10; 
            if(s[i] == 'L' ) val += 50; 
            if(s[i] == 'C' ) val += 10; 
            if(s[i] == 'D' ) val += 50; 
            if(s[i] == 'M' ) val += 10; 
        }
        return val;
        
    }
};

int main()
{
    Solution s;
    cout << s.romanToInt("VI");
    
}