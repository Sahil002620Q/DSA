#include <iostream>
#include <utility>
using namespace std;
int main ()
{
    int arr[] = {1,3,9,3,4,2};
    cout << "original array : " ;
    for(int x : arr) {
        cout << x << ' ' ;
    }

    int len = sizeof(arr)/sizeof(arr[0]);   //len 6  , loop 0 to 5
 
// 1 2 3 4 5 
// 0 1 2 3 4 
    for(int i = 0 ; i < len - 1 ; i++ )
    {
        for (int j = 0; j < len - 1 - i ; j++) 
        {
            if(arr[j] > arr[j +1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        
    }

    cout << "sorted array : " ;
    for(int y : arr) {
        cout << y << ' ' ;
    }
}