#include <iostream>
#include <vector>
using namespace std;

vector<int> del_index(int index,vector<int> &arr)
{
    arr.erase(arr.begin() + index);
    return arr;
}

vector<int> del_element(int element,vector<int> &arr)
{
    int len = sizeof(arr)/sizeof(arr[0]);
    for( int i = 0 ; i < len ; i++) //remove by element 
    {
        if ( arr[i]  == element)
        {   
            cout << "found " << arr[i] << " at index " << i << endl  ;
            arr.erase(arr.begin() + i);
            cout << "removed " << element << " sucessfully" << endl ;
            return arr;
        }
    }
}

int main ()
{

    vector<int> v = {1,2,3,4,5,6};

    cout << "before removal :\n";
    for (int i : v)
    {
        cout << i << ' ' ;
    }
    cout << endl ;

    del_element(2,v);

    cout << "after removal :\n";
    for (int i : v){
        cout << i << ' ' ;
    }
}