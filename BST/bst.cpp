#include <iostream>
using namespace std;

struct node {
    int val;
    node* left;
    node* right;

    node(int val)
    {
        this-> val = val;
        left = nullptr;
        right = nullptr;
    }
};

class bst 
{
    private:
        node* root;
    public:
        bst()
        {
            root = nullptr;
        }

        void insert(int val)
        {
            if(root == nullptr)
            {
                root = new node(val);
                //debug message
                cout << "added value " << val << " to root node" << endl;
            }
            else
            {
                cout << "\033[91mroot already filled\033[0m";
                // return;
            }
        }
};

int main()
{
    bst tree;
    tree.insert(10);
    tree.insert(101);
}