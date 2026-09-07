#include <iostream>
using namespace std;
int main () {
    char in;
    cout << "enter a char : " << endl ;
    cin >> in ;

    if ( in >= 'a' && in <= 'z')
    {
        cout << in << " is lowercase" << endl ;
    }

    else if (in >= 'a' && in <= 'z')
    {
        cout << in << "is uppercase" ;
    }

    else if( in >= 1 )
    {
        cout << in << "is a positive number" ;
    }

    else if (in < 0)
    {
        cout << in << "is negative" ;
    }

    else if (in == 0)
    {
        cout << in << "is zero";
    }
    
    else 
    {
        cout << in << "is a special symbol, key or emoji";
    }
}

// A - Z = 65....
// a - z = 97...