#include <iostream>
using  namespace std;

bool duplicate(int arr[]){
    // int arr[] = {1,2,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << len << endl  ;
    for(int i = 0 ; i <= len; i ++)
    {
        for (int j = 0; j < len; j++)
        {
            cout << arr[i] << " " << arr[j] <<  endl   ;
            if(arr[i] == arr[j] && i != j)
            {
                cout << "true" ;    
                return true;
            }
        }
    }
    cout << "false" ;
    return false;
}

int main () {
   int arr[] = {1,2,5,3,2,6,3,4,7,4,2,5};
   duplicate(arr);
}