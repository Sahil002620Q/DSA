#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> arr = {1,2,3};
    for(int i : arr)
    {
        cout << i << ' ';
    }
    cout << endl ;
    string snum = "";
    for(int i = 0 ; i < 3; i ++)
    {
        int temp = arr[i];
        char temp2 = temp + '0';
        snum.push_back(temp2);
    }
    cout << snum ;  
    int num = stoi(snum);
    num += 1;
    string need = to_string(num);
    cout << endl ;
    for(int i = 0 ; i < 3 ; i++)// fix only yhis block here just covert char string to int and push to original array
    {   
        char temp = need[i];
        int x = temp - '0';
        arr[i] = x ;
    }
    cout << 'w' << endl ;
    for(int i : arr)
    {
        cout << i << ' ';
    }
    }
};

int main()
{
    
    vector<int> arr = {9,9,9};
    for(int i : arr)
    {
        cout << i << ' ';
    }
    cout << endl ;
    string snum = "";
    for(int i = 0 ; i < 3; i ++)
    {
        int temp = arr[i];
        char temp2 = temp + '0';
        snum.push_back(temp2);
    }
    cout << snum ;  
    int num = stoi(snum);
    num += 1;
    string need = to_string(num);
    cout << endl ;
    for(int i = 0 ; i < 3 ; i++)// fix only yhis block here just covert char string to int and push to original array
    {   
        char temp = need[i];
        int x = temp - '0';
        arr[i] = x ;
    }
    cout << 'w' << endl ;
    for(int i : arr)
    {
        cout << i << ' ';
    }
}    
