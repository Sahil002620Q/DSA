#include <iostream>
using namespace std;
int main() 
{
  int low = 0;
  int high = 0;
  int target = 10;

  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int size = sizeof(arr)/sizeof(arr[0]);
  high = size -1 ;

  int i = 0;
  while( low <= high )
  {
    int mid = (low + high )/ 2; 
    if(arr[mid] < target){
  low = mid + 1;

  }else if(arr[mid] > target) {
  high = mid -1 ;
  }

}
}