#include <iostream>
#include <algorithm>
using namespace std;

// void binary_search(int loc,int* arr)
// {}

int main () // target  = 2
{
    int arr[] = {89,56,23,53,62,43,56,35,90};

    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "size of array : " << size << endl << "sorted array : ";
    
    sort(arr,arr+6);
    for(int i : arr){
        cout << i << " " ;
    }

    cout << endl ;

    int mid;
    mid = size/2;
    int midc = mid;
    cout << "mid pointing at " << mid << endl ;
    cout << arr[mid] << endl ;
    for(int i : arr)
    {
        if(arr[mid] == 56)
        {
            cout << "mid pointing at " << mid << endl ;
            cout << arr[mid] <<"rrr" ; //mid at center 3
            break;
        }

        while (arr[mid] != 56)
        {
            if (arr[mid] < 56)
            {
                mid = (mid + 1)/2;
                cout << "mid pointing at " << mid << endl ;
                cout << arr[i] <<"loc left " << i << endl  ;
                if(arr[mid] == 56){break;exit;}
            }
            else if (arr[mid] > 56){
                mid = mid/2;

                cout << "mid pointing at " << mid << endl ;
                cout << arr[i] <<"loc right" << i << endl  ;
                if(arr[mid] == 56){break;exit;}
            }
        }
        //              |
    }  ///  0  1  2  3  4  5  6  7  8    
}