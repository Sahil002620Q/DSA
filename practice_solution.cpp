// 1
// 4
// 9
// 16
// 25

#include <iostream>
using namespace std;

class Solution 
{
public:
    bool isPerfectSquare(int num) 
    {
        int n = 0;
        while(((n+1)*(n+1))<=num)
        {
            n++;
        }  
        cout << n;  
        if(((n+2)*(n+2))==num) return true;

        if(n*n!=num) return false;  
        
    }
};

int main()
{
    Solution s;
    cout << s.isPerfectSquare(11);
}