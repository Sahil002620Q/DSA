#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main () {
    vector<int> arr = {0,1,2,3,4,5,6,7,8,9};   

    // got 9
    arr.pop_back();
    for(int x : arr)
    {
        cout << x << ' ' ;
    }
}