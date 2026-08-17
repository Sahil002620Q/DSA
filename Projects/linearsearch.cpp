#include <iostream>
using namespace std;


void linear_search(int loc,int* arr)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "size of array is " << size << endl ;

    for(int i = 0 ; i <= size ; i++)
    {
        if(arr[i] == loc)
        {
            cout << "element " << arr[i] << " is at index " << i << endl  ;
        }
    } 
}

int main () 
{
    int arr[] = {89,56,23,53,62,90};
    linear_search(56,arr);
    // linear_search(23,arr);
}