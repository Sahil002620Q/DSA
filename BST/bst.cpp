#include <iostream>
using namespace std;

struct node
{
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
                    cout << "\033[93mSkipped duplicate value " << val << " for insertion\n" << "\033[0m" ;
                    return;
                }
            }

            // stopped when current have found nullptr and prev got position where no one is rn
            //current will jump for suitable condition and when it reach null it means here we have to add val and replacenull with val here

            if(val > prev->val)
            {
                prev->right = new node(val);
                cout << "\033[92mAdded " << val << " to the Right of " << prev->val << "\033[0m" << endl ;
            }
            else if (val < prev->val)
            {
                prev->left = new node(val);
                cout << "\033[92mAdded " << val << " to the Left of " << prev->val << "\033[0m" << endl ;
            } 
        }

        void remove(int val)
        {
            node* current = root;
            node* prev = nullptr;

            while(current != nullptr && current->val != val)
            {
                prev = current; 

                if(val > current->val)
                {
                    current = current->right;
                }
                else if(val < current->val)
                {
                    current = current->left;
                }
            
            }

            if(current == nullptr)
            {
                cout << "\033[91mCan't delete " << val << " : value not found in BST\033[0m \n";
                return;
            }

        }

        void search(int val)
        {

        }

        void help_preorder(node* current)
        {
            if(current == nullptr)
            {
                return;
            }

            cout << current->val << " " ; //print current node
            help_preorder(current->left);
            help_preorder(current->right);
        }

        
        void preorder()
        {
            if(root == nullptr)
            {
                cout << "\033[93mTree is empty\033[0m \n";
                return;
            }
            
            help_preorder(root);
            cout << endl ;
        }

        void help_postorder(node* current)
        {
            if(current == nullptr)
            {
                return;
            }

            help_postorder(current->left);
            help_postorder(current->right);
            cout << current->val << " " ; //print current node
        }
        
        void postorder()
        {
            if(root == nullptr)
            {
                cout << "\033[93mTree is empty\033[0m \n";
                return;
            }

            help_postorder(root);
            cout << endl ;
        }

        void help_inorder(node* current)
        {
            if(current == nullptr)
            {
                return;
            }

            help_inorder(current->left);
            cout << current->val << " " ; //print current node
            help_inorder(current->right);
        }

        void inorder()
        {
            if(root == nullptr)
            {
                cout << "\033[93mTree is empty\033[0m";
                return;
            }

            help_inorder(root);
            cout << endl ;
        }

        void min()
        {

        }

        void max()
        {

        }

        void height()
        {

        }
};

int main()
{
    bst tree;
    tree.preorder();
    tree.insert(10);
    tree.insert(100);
    tree.insert(50);
    tree.insert(75);
    tree.insert(25);
    tree.insert(25);
    tree.remove(999);
    tree.preorder();
    tree.inorder();
    tree.postorder();
}