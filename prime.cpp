#include <iostream>
using namespace std;
int main () {
    int in;
    bool prime = true ;
    cout << "enter a number : "  ;
    cin >> in ;

    int i = 2;
    while (i <= (in - 1))
    {
        if(in % i == 0)
        {
            prime = false; 
        }
        i++;
    }

    if (prime == true || prime == 1)
    {
        cout << in << " is a prime number " ;
    }
    else 
    {
        cout << in << " is a composite number" ;
    }
}