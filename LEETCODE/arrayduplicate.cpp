#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i+1]) return true;
        }
        return false;
    }
};

int main()
{
    vector<int> arr = {1,2,5,3,4};
    Solution s1;
    cout << s1.containsDuplicate(arr) ;
}



    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = 0; j < nums.size(); j++)
    //     {
    //         if(i != j){
    //             // cout << i << ' ' << j << endl ;
    //             if(nums[i] == nums[j]){return false;}
    //         }
    //     }
        
    // }
    // return true;