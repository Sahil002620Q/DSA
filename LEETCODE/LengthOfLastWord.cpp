#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        for(int i = s.length() -1 ; i > 0 ; i--)
        {
            if(s[i] != ' ' )
            {
                len++;
            }
            else if(len != 0 ){
               return len;
            }
        }
        return -1;
    }
};

int main () {
    string s = "sahil is great ";
    Solution ss;
    int len = ss.lengthOfLastWord(s);
    cout << len ;
}

//    loop if not ' ' 