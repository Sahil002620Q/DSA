#include <iostream>
using namespace std;
int insAtStart(int element,int *arr,int &size)
{
    for(int i = size - 1;i >=0;i--)
    {
        arr[i+1] = arr[i];
    }   
    arr[0] = element;
    size++;
    return size;
}     

int insAtIndex(int element,int *arr,int index,int &size)
{
    if(index < 0 || index > size) 
    { 
       cout << "error: invaild index\n";
       return size;
    }
    else
    {   
        for(int i = size - 1;i >=index;i--)
        {
            arr[i+1] = arr[i];
        }   
        arr[index] = element;
        size++;
        return size;
    }
}     

int insAtEnd(int element,int *arr,int &size)
{
    
    arr[size] = element;
    size++;
    return size;
}     

int main()
{
  
    int arr[] = {1,2,3};
    
   int sizex = sizeof(arr)/sizeof(arr[0]);
    for(int i = sizex - 1;i >=0;i--)
    {
        arr[i+1] = arr[i];
    }   
    arr[0] = 101;
    sizex++;
  
    insAtIndex(99,arr,0,sizex);
   insAtEnd(1010,arr,sizex);
    for(int i = 0; i < sizex; i++)
    {
       cout << arr[i] << ' ' ; 
    }
}