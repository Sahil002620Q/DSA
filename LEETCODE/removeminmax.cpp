#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxIndex = max_element(nums.begin(), nums.end()) - nums.begin();
        int minIndex = min_element(nums.begin(), nums.end()) - nums.begin();
        int size = nums.size()/2; // 10 t0  5 
        int deletions = 0;
        if(size > maxIndex)
        {
            // nums.erase(nums.begin() + maxIndex);
            deletions += maxIndex + 1;
        }
        else
        {
            // nums.erase(nums.end() - (nums.size() - minIndex) );
            deletions += nums.size() - minIndex  ;
        }

        if(size > minIndex)
        {
            // nums.erase(nums.begin() + minIndex);
            deletions += minIndex + 1;        
        }
        else
        {
            // nums.erase(nums.end() - (nums.size() - maxIndex) );
            deletions += nums.size() - minIndex  ;
        }
        
        return deletions;

    }
};

int main()
{
    Solution s;
    vector<int> arr = {3,5,9,6,8,6,3,6,1,8}; //assumw 10 
    cout << s.minimumDeletions(arr);
}