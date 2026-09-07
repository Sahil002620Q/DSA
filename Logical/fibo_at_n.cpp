#include <iostream>
using namespace std;
void fabo(int prev1, int prev2)
{
    int count  = 1 ;
    if (count <= 5){
      int fabon = prev1 + prev2;
      cout << fabon << " "  ;
      prev1 = prev2;
      prev2 = fabon;
      fabo(prev1,prev2);
      count++;
    }
}

int main () {
    cout << "Enter the term at which you want to check fabonachi value : " ;
    fabo(0,1);
    // cout << endl  << "elemet at " << n << " in fibonatchi series is : "  << ((n - 1) + (n - 2)) ;
}