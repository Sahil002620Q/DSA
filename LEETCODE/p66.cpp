#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        // 1 2 3 
        
        int size = digits.size();
        if(size == 1 && digits[0] == 0)
        {
            digits[0] = 1;
            return digits;
        }
        for (int i =  size - 1 ; i >= 0; i--)
        {
            if(digits[i] >= 9)
            { 
                digits[i] = 0;
            }
            else if(digits[i] >= 0 && digits[i] <= 8 )
            {
                digits[i] += 1;
                return digits;
            }
        }
        if(digits[0] == 0)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }


};

int main()
{
    Solution s;
    vector<int> arr = {1,0};
    vector<int> arr2 = s.plusOne(arr);
    for(int x : arr2)
    {
        cout << x << ' ';
    } 
   
}
//working + submitted
//given array where each element is between 0 to 9 , assume each 
//element represent digit plae ie oneth tenth and so on , add one to array and return the array
