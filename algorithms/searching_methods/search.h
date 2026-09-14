#ifndef SEARCH
#define SEARCH
#include <iostream>
void linear_search(int loc,int* arr)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout << "size of array is " << size << std::endl ;

    for(int i = 0 ; i <= size ; i++)
    {
        if(arr[i] == loc)
        {
            std::cout << "element " << arr[i] << " is at " << i << std::endl  ;
        }
    } 
}

#endif
