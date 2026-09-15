// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) 
//     {
//         int size = digits.size();
//         while(size != 0)
//         {
//             digits.back() = digits.back() + 1;
//             if(digits.back() > 10)
//             {
//                 int digit = digits.back();
//                 string sep = to_string(digit);
//                 int last = sep[1] - '0';
//                 int next = sep[0] - '0';
//                 digits.back() = last;
//                 digits[digits.back() - 1] += next;    
//             }
//             else
//             {

//             }
//             size -= 1;
//         }
//         return digits;
//     }



//     // vector<int> plusOne(vector<int>& digits) 
//     // {
//     //     vector<int> arr2;
        
//     //     string snum = "";
//     //     for(int i = 0 ; i < digits.size(); i ++) //here
//     //     {
//     //         int temp = digits[i];
//     //         char temp2 = temp + '0';
//     //         snum.push_back(temp2);
//     //     }
          
//     //     int num = stoi(snum);
//     //     num += 1;
//     //     string need = to_string(num);
//     //     for(int i = 0 ; i < need.size() ; i++)// fix only yhis block here just covert char string to int and push to original array
//     //     {   
//     //         char temp = need[i];
//     //         int x = temp - '0';
//     //         arr2.push_back(x) ;
//     //     }
//     //     return arr2;
//     // }
// };

// int main()
// {
//     Solution s;
//     vector<int> arr = {9,9,8};
//     vector<int> arr2 = s.plusOne(arr);
//     for(int x : arr2)
//     {
//         cout << x << ' ';
//     } 
//     // for(int i : arr)
//     // {
//     //     cout << i << ' ';
//     // }
//     // cout << endl ;
//     // string snum = "";
//     // for(int i = 0 ; i < 3; i ++)
//     // {
//     //     int temp = arr[i];
//     //     char temp2 = temp + '0';
//     //     snum.push_back(temp2);
//     // }
//     // cout << snum ;  
//     // int num = stoi(snum);
//     // num += 1;
//     // string need = to_string(num);
//     // cout <<endl << need << endl ; //done
//     // for(int i = 0 ; i < need.size() ; i++)// fix only yhis block here just covert char string to int and push to original array
//     // {   
//     //     char temp = need[i];
//     //     int x = temp - '0';
//     //     arr2.push_back(x) ;
//     // }
//     // // arr[3] = 1;
//     // cout << 'w' << endl ;
//     // for(int i : arr2)
//     // {
//     //     cout << i << ' ';
//     // }
// }
// not worthy as it will fail when int is too long 