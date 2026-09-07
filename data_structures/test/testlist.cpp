#include "../LinkedList.h"
using namespace std;
int main()
{
    LL list;
    list.insAtBeginning(50);
    list.insAtBeginning(40);
    list.insAtBeginning(30);
    list.insAtBeginning(20);
    list.insAtBeginning(10);

    list.insAtEnd(60);
    list.insAtEnd(70);
    list.insAtEnd(80);
    list.insAtEnd(90);
    list.insAtEnd(100);  //expected 1 to 100
    list.delByValue(100); 
    list.delFromEnd();
    list.delFromStart(); //expected 20 to 80

    list.display();
    cout << "length of list : " << list.length() << endl ;
    cout << "Do 30 exist in linked list : " << (list.search(30) ? "Yes" : "no") << endl ;
}

//run using 
//  g++ testlist.cpp ../LinkedList.cpp ; ./a.out