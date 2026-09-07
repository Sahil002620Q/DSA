#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

class terminate {
    public:
        void eliminate(int target,vector<int>& arr){
            for( int i = 0 ; i < arr.size() ; i++) //remove by element 
            {
                if ( arr[i]  == target)
                {   //removal by element
                    cout << "found " << arr[i] << " at index " << i << endl  ;
                    arr.erase(arr.begin() + i);
                    cout << "target " << target << " eliminated sucessfully" << endl ;
                    break;
                }
            }
        }
};


int main (){

    class terminate me;
    vector<int> arr = {0,1,2,3,4,5,6,7,8,99,63,279,28,93,92,20};
    me.eliminate(8,arr);
    
    
}