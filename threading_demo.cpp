#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void say()
{
    cout << "\033[91mhello\n\033[0m" ;
}

int main()
{
    thread t(say);

    cout << "hello\n";
    cout << "hello\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "hello\n\a";

    t.join(); //wait for me daddy
}