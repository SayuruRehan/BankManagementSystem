#include "BST_Tree.h"
#include "Hashtable.h"

BST_Tree::BST_Tree()
{
    
}

void BST_Tree::add_Account(string name, string address, int accountno, int password, int balance)
{
    h.add(accountno, password);
    ofstream write;
    write.open("server.txt", ios::app);
    write << name << endl << address << endl << accountno << endl << password << endl << balance << endl;
    write.close();
    BST_Node * temp = new BST_Node(name, address, accountno, password, balance);

    BST_Node * current = Root;
    if (Root == nullptr)
    {
        Root = temp;
    }
    else
    {
        while (true)
        {
            if (accountno < current->account_number)
            {
                if(current->left == nullptr)
                {
                    current->left = temp;
                    break;
                }
                current = current->left;
            }

            if (accountno > current->account_number)
            {
                if(current->right == nullptr)
                {
                    current->right = temp;
                    break;
                }
                current = current->right;
            }
        }
    }
}

BST_Node * BST_Tree::delete_Account(BST_Node * root, int accountno)
{
    if (root == nullptr)
        cout << "It seems that the Tree is empty or You have entered incorrect data!" << endl;
    else if (accountno < root->account_number)
        root->left = delete_Account(root->left, accountno);
    else if (accountno > root->account_number)
        root->right = delete_Account(root->right, accountno);
    else
    {
        if (root->left && root->right)
        {
            findMax(root->left);
            root->account_number = v.back();
            root->left = delete_Account(root->left, root->account_number);
        }
        else
        {
            cout << "aya" << endl;
            BST_Node * temp = root;
            if (root->left == nullptr)
                root = root->right;
            else if (root->right == nullptr)
                root = root->left;
            delete temp;
        }
    }
    return (root);
}

void BST_Tree::withdraw(int accountno, int amount)
{
    load_Server();
    BST_Node * temp = search(Root, accountno);
    temp->balance = temp->balance - amount;
    
}