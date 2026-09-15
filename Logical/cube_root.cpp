#include <iostream>
using namespace std;

int cbrt(int num)
{
    long long root = 0;
    while((root + 1)*(root + 1)*(root + 1) <= num) root++;
    return root;
}

int main () {
    cout << cbrt(999);
}