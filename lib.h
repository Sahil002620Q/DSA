#ifndef LIB
#define LIB
#include <iostream>
#include <vector>
void eliminate(int target,std::vector<int>& arr)
{
    for( int i = 0 ; i < arr.size() ; i++) //remove by element 
    {
        if ( arr[i]  == target)
        {   //removal by element
            std::cout << "found " << arr[i] << " at index " << i << std::endl  ;
            arr.erase(arr.begin() + i);
            std::cout << "target " << target << " eliminated sucessfully" << std::endl ;
            break;
        }
    }
}
#endif