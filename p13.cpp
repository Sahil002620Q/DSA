#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    int romanToInt(string s) 
    {
        int val = 0;
        for (int i = (int)s.size() -1 ; i >= 0; i--)
        {
            if(s[i] == 'I' )  
            {
                if(s[i+1] )
                {
                    val -= 1;
                }
                else
                {
                    val += 1; 
                }
            }

            if(s[i] == 'V' ) 
            {
                if(s[i+1] > s[i])
                {
                    val -= 1;
                }
                else
                {
                    val += 5; 
                }
            }

            if(s[i] == 'X' ) 
            {
                if(s[i+1] > s[i])
                {
                    val -= 1;
                }
                else
                {
                    val += 10; 
                }
            }

            if(s[i] == 'L' ) 
            {
                if(s[i+1] > s[i])
                {
                    val -= 1;
                }
                else
                {
                    val += 50; 
                }
            }

            if(s[i] == 'C' ) 
            {
                if(s[i+1] > s[i])
                {
                    val -= 1;
                }
                else
                {
                    val += 100; 
                }
            }

            if(s[i] == 'D' ) 
            {
                if(s[i+1] > s[i])
                {
                    val -= 1;
                }
                else
                {
                    val += 500; 
                } 
            }

            if(s[i] == 'M' ) 
            {
                if(s[i+1] > s[i])
                {
                    val -= 1;
                }
                else
                {
                    val += 1000; 
                }
            }
             
        }
        return val;
        
    }
};

int main()
{
    Solution s;
    cout << s.romanToInt("MCMXCIV");
    //1994
}



// preserved 
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution 
// {
// public:
//     int romanToInt(string s) 
//     {
//         int val = 0;
//         for (int i = (int)s.size() -1 ; i >= 0; i--)
//         {
//             if(s[i] == 'I' ) val += 1; 
//             if(s[i] == 'V' ) val += 5; 
//             if(s[i] == 'X' ) val += 10; 
//             if(s[i] == 'L' ) val += 50; 
//             if(s[i] == 'C' ) val += 100; 
//             if(s[i] == 'D' ) val += 500; 
//             if(s[i] == 'M' ) val += 1000; 
//         }
//         return val;
        
//     }
// };