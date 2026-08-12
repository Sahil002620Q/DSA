#include <iostream>
using namespace std;

int main() {
    cout << 0 << endl << 1 << endl ;
    
    int prev_1 = 0;
    int prev_2 =1;
    for(int i = 0; i < 18 ; i++)
    {
        int fabo = prev_1 + prev_2;
        cout << fabo << endl ;
        prev_1 = prev_2;
        prev_2 = fabo;
        }
}
