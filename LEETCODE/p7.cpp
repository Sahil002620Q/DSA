#include <iostream>
#include <limits>
#include <cstdint>

using namespace std;
class Solution {
public:
    int reverse(int x) 
    {
        int clone = x;  
        // if(!(clone >= INT32_MIN && clone <= INT32_MAX))
        // {
        //     return 0;
        // }
        int Reverse = 0; 
        while(clone != 0)
        {
            int last ;
            last = clone%10; 
            if(Reverse == 0)
            {
                Reverse += last;
            }
            else
            {
                if (Reverse > INT32_MAX/10 || (Reverse == INT32_MAX/10 && last > 7 ))
                {
                    return 0;
                }

                if (Reverse < INT32_MIN/10 || (Reverse == INT32_MIN/10 && last < -8 ))
                {
                    return 0;
                }
                
                Reverse *= 10;
                Reverse += last;
            }
            clone /= 10; 
        }
        return Reverse;
        
    }
};

int main()
{
    Solution s;
    cout << s.reverse(123);
}