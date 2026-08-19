#include <iostream>
#include <vector>
using namespace std ;

class bin{
    public:
        void binary(int target,vector<int> arr)
        {

            int low =  0 ;
            int high = 0;

            int size = sizeof(arr)/sizeof(arr[0]);  
            high = size - 1;
                
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
};

int main () 
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    bin b;
    b.binary(6,arr);  //work till target 6 
}