#include <iostream>
using namespace std;
class Solution
{
    public:
    bool isVailed(string s)
    {
        int size = s.size();
        for (int i = 0; i < size ; i++)
        {
            if(s[i] = '[')
            {
                for (int j = 0; j < size; j++)
                {
                    if (s[j] == ']') cout  << s[j] ;
                    else cout << "notfound" ;
                }
                
            }
        }
        
    }
};

// { [] }
int main()
{
    Solution s1;
    string str= "{[]}";
    cout << s1.isVailed(str);
}


