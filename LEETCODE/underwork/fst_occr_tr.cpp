#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        for(int i = 0; i < haystack.size()  ; i++)
        {
            for(int j = 0 ; j < needle.size() ; j++)
            {
                if(haystack[i] == needle[j])
                {
                      
                }
            }
        }
    }
        
};

int main () {
    Solution ss;
    string haystack = "sabbutsad";
    string needle = "sad";
    int occat = ss.strStr(haystack,needle);
    cout << occat ; 
}

// 1 2 3 4 5 6 
// 4 5 6
//