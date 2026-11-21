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
            //when tree is empty
            if(root == nullptr)
            {
                root = new node(val);
                //debug message
                cout << "\033[92mAdded " << val << " as root node\033[0m\n";           
                return;
            }

            //when element is pushed after root

            node* current = root;
            node* prev = nullptr;

            while(current != nullptr)
            {
                prev = current;
                if (val < current->val)
                {
                    current = current->left;
                }
                else if (val > current->val)
                {
                    current = current->right;
                }
                else
                {
                    cout << "Skipped duplicate value " << val << " for insertion\n" ;
                    return;
                }
            }
            // stopped when current have found nullptr and prev got position where no one is rn
            //current will jump for suitable condition and when it reach null it means here we have to add val and replacenull with val here

            if(val > prev->val)
            {
                prev->right = new node(val);
                cout << "Added " << val << " to the Right of " << prev->val << endl ;
            }
            else if (val < prev->val)
            {
                prev->left = new node(val);
                cout << "Added " << val << " to the Left of " << prev->val << endl ;

            }
            
            
        }
};

int main()
{
    bst tree;
    tree.insert(10);
    tree.insert(100);
    tree.insert(50);
    tree.insert(75);
    tree.insert(25);
    tree.insert(25);
}