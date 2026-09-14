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
 
    // int arr[] = {1,3,9,3,4,2};
    
    for (int i = 0; i < len; i++)
    {
        int min_i = i;
        for (int j = i +1 ; j < len ; j++) //i +1 coz we want 1 to end then 2 to end and so on
        {
            if(arr[min_i] > arr[j])
            {
                min_i = j;
            }
            
        }
        swap(arr[i], arr[min_i]);
    }
    

    cout << "sorted array : " ;
    for(int y : arr) {
        cout << y << ' ' ;
    }
}