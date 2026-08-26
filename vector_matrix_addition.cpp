#include <iostream>
#include <vector>
using namespace std;
int main () {
  
    vector<vector<int>> matrix1 = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    vector<vector<int>> matrix2 = {
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };
    
    vector<vector<int>> result =matrix1;
    
    for (int i = 0; i < matrix1.size(); i++)
    {
        for (int j = 0; j < matrix1[i].size(); j++)
        {
             result[i][j] =  matrix1[i][j] + matrix2[i][j];
             cout << result[i][j] << " ";
        }
        cout << endl ;
        
    }
    
}