#include <iostream>
using namespace std;
int main () {
    int in;
    cout << "enter a number : "  ;
    cin >> in ;

    int oddsum = 0;
    for(int i = 0 ; i <= in ; i++)
    {
        if(i % 2 == 1)
        {
            oddsum = oddsum + i;
        }
    }
    cout << "Sum of all odd numbers from 1 to " << in << " is " << oddsum ;
}