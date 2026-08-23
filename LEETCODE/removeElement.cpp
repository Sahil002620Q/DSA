#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        for (int i = 0; i < nums.size() ; i++)
        {      
            if(nums[i] == val)
            {
                nums.erase(nums.begin() + i) ;
                k--;
                i--;
            }
        }
        return k;
    }
};

int main() 
{
    vector<int> arr = {3,2,2,3,2};
    Solution s;
    int k = s.removeElement(arr,2);
    cout << k ;
    for(int x: arr){
        cout << x << " " ;
    }
}