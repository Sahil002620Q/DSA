#include <iostream>
using namespace std;
int main () {
    int in = 20;

    char fig = '*';
    for(int i = 1 ; i <= in ; i++)
    {
        for(int j = 1 ; j <= in ; j++)
        { 
            if(j == in){
                cout << '*' << ' ' ;
            }

            else if(j != in && j != 1){
                if(i != 1 && i != in){
                cout << ' ' << ' ' << ' ' ;
                }
                else {
                    cout << '*' << ' ' << ' ';
                }
            }


            else if(j == 1){
                cout << '*' << ' ' << ' ' ;
            }
            
        }
        cout << endl;
    }


}