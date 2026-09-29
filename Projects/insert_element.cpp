#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main () {
    vector<int> arr = {0,1,2,3,4,5,6,7,8,9};
    //insert_iterator
    arr.push_back(20);
    // arr.insert(arr.begin() + 1111,99);

    for(int x : arr)
    {
        cout << x << ' ' ;
    }
}