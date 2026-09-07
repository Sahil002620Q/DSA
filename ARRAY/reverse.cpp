#include <iostream>
using namespace std;
int main(){
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter value for array : " ; cin >> arr[i];
    }

    cout << "Reverse array : " ;

    for (int i = 5-1; i >= 0; i--)
    {
        cout << arr[i] << ' ';
    }
    
}