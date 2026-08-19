#include <iostream>
using namespace std;
#define max 5

class queue
{
    private:
        int arr[max];
        int front; //pointer use as i in arr
        int rear;
    
    public:
        queue();
        bool empty();
        int enqueue(int top); // add at back
        void dequeue();  //remove front
        bool isfull();
        int peak();
        int back();
        void display();
};

queue::queue()
{
    front = -1;
    rear = -1;
}

bool queue::empty()
{
    if(front == -1 and rear == -1)
    {
        return 1;
    }
    else return 0;
}

bool queue::isfull()
{
    if(rear == max)
    {
        return 1;
    }
    else return 0;
}

int queue::enqueue(int num)
{
    rear++;
    if(front == -1){ front = 0; }
    return arr[rear] = num;
    
}

void queue::dequeue()
{
    front++;
}

int queue::peak()
{
    return arr[front];
}

int queue::back()
{
    return arr[rear];
}



void queue::display()
{
    for(int j = 0; j <= rear; j++)
    {
        cout << arr[j] << ' ';
    }
}

int main() {

    queue q1;
    cout << (q1.empty() == true ? "is empty : true\n" : "is empty : false\n");
   
    cout << "peek : " << q1.peak() << endl ;
   
    q1.enqueue(10);
    cout << "enqueued 10 " << endl;
    cout << "front : " << q1.peak() << endl ;
    cout << "back : " << q1.back() << endl << endl;

    q1.enqueue(20);
    cout << "enqueued 20 " << endl;
    cout << "front : " << q1.peak() << endl ;
    cout << "back : " << q1.back() << endl << endl;

    q1.enqueue(30);
    cout << "enqueued 30 " << endl;
    cout << "front : " << q1.peak() << endl ;
    cout << "back : " << q1.back() << endl << endl;

    q1.dequeue();
    cout << "dequeued (pop front) " << endl;
    cout << "front : " << q1.peak() << endl ;
    cout << "back : " << q1.back() << endl << endl;
    // cout << (s1.empty() == true ? "is empty : true\n" : "is empty : false\n");
    q1.display();
}
//next make template so i can use it with string too