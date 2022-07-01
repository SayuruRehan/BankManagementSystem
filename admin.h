#pragma once
#include "BST_Tree.h"
#include "Hashtable.h"

void admin()
{
    BST_Tree t;
    Hashtable h;
    int condition = 0;

    while (condition != 6)
    {
        cout << "Welcome admin" << endl;
        cout << "Choose the action you want to do" << endl;
        cout << "Press 1 to add account" << endl;
        cout << "Press 2 to delete account" << endl;
        cout << "Press 3 to check all accounts" << endl;
        cout << "Press 4 to view password of account" << endl;
        cout << "Press 5 to edit account details" << endl;
        cout << "Press 6 to exit" << endl;

        cin >> condition;

        if (condition == 1)
        {
            string n = "", a = "";
            int acc, p, b;
            cout << "Enter name: " << endl;
            cin >> n;
            cout << "Enter address: " << endl;
            cin >> a;
            cout << "Enter account number: " << endl;
            cin >> acc;
            cout << "Enter password: " << endl;
            cin >> p;
            cout << "Enter balance: " << endl;
            cin >> b;
            t.add_Account(n, a, acc, p, b);
        }

        if (condition == 2)
        {
            int acc = 0;
            cout << "Enter account number: " << endl;
            cin >> acc;
            t.load_Server();
            t.Root = t.delete_Account(t.Root, acc);
            cout << "Account deleted" << endl;
            h.delete_password(acc);
            cout << "Password deleted" << endl;
            t.update_Server(t.Root);
            cout << "Server updated" << endl;
        }

        if (condition == 3)
        {
            t.load_Server();
            t.printoinfo(t.Root);
        }

        if (condition == 4)
        {
            h.displayPasswords();
        }

        if (condition == 5)
        {

        }

        if (condition == 6)
        {
            condition = 6;
        }
    }
}