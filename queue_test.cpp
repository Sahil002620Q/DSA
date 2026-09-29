#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> mq;
    cout << "pushed 10" << endl ; mq.push(10);
    cout << "pushed 100" << endl ; mq.push(100);
    cout << "pushed 1000" << endl ; mq.push(100);
    cout << "pushed 1000" << endl ; mq.push(1000);
    cout << "popped \n";   mq.pop();
    cout << "Bottom : " << mq.back();
}