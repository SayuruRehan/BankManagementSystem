#pragma once
#include "BST_Tree.h"
#include "Hashtable.h"

void Customer()
{
    BST_Tree t;
    Hashtable h;
    int condition = 0;
    while (condition != 3)
    {
        cout << "Welcome customer" << endl;
        cout << "Choose one of the following options:" << endl;
        cout << "1. View Account Details" << endl;
        cout << "2. View transaction history" << endl;
        cout << "3. Exit" << endl;
        cin >> condition;
        if (condition == 1)
        {
            int accountno;
            cout << "Enter your account number: " << endl;
            cin >> accountno;
            BST_Node *temp = t.search(t.Root, accountno);
            cout << "Account found" << endl;
            cout << "Name: " << temp->name << endl;
            cout << "Address: " << temp->address << endl;
            cout << "Account number: " << temp->account_number << endl;
            cout << "Password: " << temp->password << endl;
            cout << "Balance: " << temp->balance << endl;
        }
        else if (condition == 2)
        {
            
        }
        else if (condition == 3)
        {
           condition = 3;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }
}