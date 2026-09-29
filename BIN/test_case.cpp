#include<iostream>
#include<vector>
using namespace std;

void array_insert(vector<int>&arr, int n , int value){
   cout  << "before insertion :";
    for(int a :arr){
        cout  << a << " ";
    }
    cout << endl;

    arr.push_back(value);
    
    cout << "After insertion :";
    for(int a :arr){
        cout  <<a << " " ;
    }
}
int main(){
    vector<int>arr = {1,2,3,4,5};
    int n = arr.size();
    int  value ;
    cout << "Enter a num : " ;
    cin >> value;
    
    array_insert(arr,n,value);
    return 0;

}
// aa main na apne aap logic lagiya ha thik ha q1 ?