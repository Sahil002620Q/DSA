#include <iostream>
using namespace std ;
int main () {

    //binary search 

    //get target
    int target ;
    cout << "enter target  : " ; cin >> target ;

    //set high and low at 0 
    int low =  0 ;
    int high = 0;

    // get/define aarray
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    //           0, , , ,4, , , , ,9      

    //get array size 
    int size = sizeof(arr)/sizeof(arr[0]);

    //set value of high  
    high = size - 1; //9
        
   //run loop till right cursor and left cursor doesn't cross each other 
    int i = 0 ;
    while (low <= high)
    {
        int mid = (low + high )/ 2  ;
        
        if(arr[mid]  > target && arr[mid] != target)
        {
            high = mid - 1 ;
        }
        else if(arr[mid] < target && arr[mid] != target)
        {
            low = mid + 1;
        }
        else if(arr[mid] == target)
        { 
            cout << arr[mid] << " is at index " << mid ;
            break;
        }
        i++;
    }

    if(low > high)
    {
        cout << "out of bound" ;
    }

    

}