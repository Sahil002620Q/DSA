#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
    public:
        int countCommas(int n) {
            int commas  = to_string(n).size() ;//pending
            return commas;
        }
};

int main()
{
    Solution s;
    int n = 100;
    int n1 = 1000;
    int n2 = 998;
    s.countCommas(1998);
}