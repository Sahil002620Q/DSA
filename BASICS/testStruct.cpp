#include <iostream>
using namespace std;
struct s
{
    int x;
    float y;
};

int main ()
{
    s s1;
    s1.x = 1;
    s1.y = 2;

    cout << s1.x << endl ;
    cout << s1.y << endl ;
}