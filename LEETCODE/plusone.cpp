#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string arr = "";
        for(int i = 0; i < digits.size(); i++)
        {//appent digit[i] to string
            
            arr.push_back(digits[i]);
        }
        cout << arr ;
        int num = stoi(arr) ; //string to int
        num++;
        string s = to_string(num);

        for (int i = 0; i < s.length() ; i++)
        {
            digits[i] = s[i];
        }
        return digits;
    }
};

int main()
{
    Solution s;
    vector<int> digits = {1,2,3};
    vector<int> ne = s.plusOne(digits);
    for(int x : ne)
    {
        cout << x << ' ' ;
    }

}