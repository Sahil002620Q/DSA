int main()

{

node n1;

node n2;



node* HEAD;

HEAD = &n1; 



n1.element = 33;

n1.next = nullptr;



n2.element = 44;

n2.next = nullptr;



n1.next = &n2;



cout << n1.element << endl ;

cout << n1.next << endl ;

cout << n1.next->element << endl ;//using address of next get element 



cout << n2.element << endl ;

cout << n2.next << endl ;



cout << HEAD->element << endl ;

cout << HEAD->next->element << endl ;
