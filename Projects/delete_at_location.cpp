#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main (){
    
    cout << "select removal method " << endl << " 1. By Index" << endl << " 2.By location " << endl ; 

    int index = 3;
    int element = 99;

    vector<int> arr = {0,1,2,3,4,5,6,7,8,99};
    // arr.erase(arr.begin());

    for( int i = 0 ; i < 10 ; i++) //remove by element 
    {
        if ( arr[i]  == element)
        {   //removal by element
            cout << "found " << arr[i] << " at index " << i << endl  ;
            arr.erase(arr.begin() + i);
            cout << "removed " << element << " sucessfully" << endl ;
            break;
        }
    }
    
    for (int i : arr){
        cout << i << ' ' ;
    }

    //removal by location 
    cout << "size : " << arr.size() ;
    cout << "rm by index got index 3 target is '2' " << endl ;
    arr.erase(arr.begin() + index);
    cout << "index 3 ie element '2' popped sucessfully" << endl ;
    for (int i : arr){
        cout << i << ' ' ;
    }
}