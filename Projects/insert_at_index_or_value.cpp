#include <iostream>
#include <vector>
using namespace std;

vector<int> ins_index(int index,int element,vector<int> &arr)
{
    arr.insert(arr.begin() + index,element);
    return arr;
}

vector<int> ins_at_end(int element,vector<int> &arr)
{
    arr.insert(arr.end(),999);
    return arr;
}


int main ()
{
    vector<int> v = {1,2,3,4,5,6};

    cout <<  string(35,'=') << endl ;

    cout << "before insertion :\n";
    for (int i : v){
        cout << i << ' ' ;
    }
    cout << endl ;

    ins_index(0,444,v);

    cout << "after insertion at index 0 :\n";
    for (int i : v){
        cout << i << ' ' ;
    }

    cout << endl <<  string(35,'=') << endl ;

    cout << "before insertion at end :\n";
    for (int i : v){
        cout << i << ' ' ;
    }
    cout << endl ;

    ins_at_end(9993982,v);

    cout << "after insertion at end :\n";
    for (int i : v){
        cout << i << ' ' ;
    }

    cout << endl <<  string(35,'=') << endl ;
}