#include <iostream>
using namespace std;
#define max 5

class deques
{
    private:
        int arr[max];
        int front; 
        int rear;
    
    public:
        deques();
        bool empty();
        int push_back(int top); 
        int push_front(int num); ///int pe
        void pop_front();  //remove front
        void pop_back();
        bool isfull();
        void display();
};

deques::deques()
{
    front = -1;
    rear = -1;
}

bool deques::empty()
{
    if(front == -1 and rear == -1)
    {
        return 1;
    }
    else return 0;
}

bool deques::isfull()
{
    if(rear == max - 1)
    {
        return 1;
    }
    else return 0;
}

int deques::push_back(int num)
{
    rear++;
    if(front == -1){ front = 0; }
    arr[rear] = num;
    return arr[rear] = num;
    
}

int deques::push_front(int num)
{
    if(front == -1)  
    { 
        front = 0; 
        rear = 0;
        return arr[rear] = num;;
    }
    if(front != -1)
    {
        rear++;
        int len = sizeof(arr)/sizeof(arr[0]);
        for(int i = 0 ; i < len - 1; i++)
        {
            arr[i] = arr[i+1];
        }
        return arr[rear] = num;
    }
}
void deques::pop_front()
{
    front++;
}

void deques::pop_back()
{
    rear--;
}

void deques::display()
{
    
    for(int j = 0; j <= rear; j++)
    {
        cout << arr[j] << ' ';
    }
}

int main() 
{
    deques q1;
    cout << (q1.empty() == true ? "is empty : true\n" : "is empty : false\n");
   
    q1.push_back(10);
    cout << "enqueued 10 at back" << endl;
  //  cout << "front : " << q1.peak() << endl ;
  //  cout << "back : " << q1.back() << endl << endl;
    q1.push_back(20);
    cout << "enqueued 20 at back" << endl;
    
    q1.pop_back();
    cout << "popped 20 at back" << endl;
    
    q1.push_back(90);
    cout << "enqueued 90 at back" << endl;
  //  cout << "enqueued 20 at back " << endl;
  //  cout << "front : " << q1.peak() << endl ;
  //  cout << "back : " << q1.back() << endl << endl;

  //  q1.push_back(30);
  //  cout << "enqueued 30 at front " << endl;
   // cout << "front : " << q1.peak() << endl ;
   // cout << "back : " << q1.back() << endl << endl;
    
   // q1.push_back(30);
  //  cout << "enqueued 30 at front " << endl;
  //  cout << "front : " << q1.peak() << endl ;
  //  cout << "back : " << q1.back() << endl << endl;

 //   q1.pop_back();
 //   cout << "dequeued (pop front) " << endl;
 //   cout << "front : " << q1.peak() << endl ;
 //   cout << "back : " << q1.back() << endl << endl;
    
  //  q1.pop_front();
  //  cout << "dequeued (pop back) " << endl;
  //  cout << "front : " << q1.peak() << endl ;   cout << "back : " << q1.back() << endl << endl;
    // cout << (s1.empty() == true ? "is empty : true\n" : "is empty : false\n");
    q1.display();
}
//next make template so i can use it with string too
