#pragma once
#include "BST_Tree.h"
#include "Hashtable.h"

void staff()
{
    BST_Tree t;
    Hashtable h;
    int condition = 0;
    while (condition != 5)
    {
        cout << "Welcome staff" << endl;
        cout << "Choose one of the following options:" << endl;
        cout << "1. View transaction history" << endl;
        cout << "2. Transfer" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Deposit" << endl;
        cout << "5. Exit" << endl;

        cin >> condition;

        if (condition == 1)
        {
           
        }
        else if (condition == 2)
        {
            int senderaccountno = 0, receiveraccountno = 0, amount = 0;
            cout << "Please enter sender account number: " << endl;
            cin >> senderaccountno;
            cout << "Please enter receiver account number: " << endl;
            cin >> receiveraccountno;
            cout << "Please enter amount: " << endl;
            cin >> amount;
            t.transfer(senderaccountno, receiveraccountno, amount);
        }
        else if (condition == 3)//withdraw
        {
            int accountno = 0, amount = 0;
            cout << "Please enter account number: " << endl;
            cin >> accountno;
            cout << "Please enter amount: " << endl;
            cin >> amount;
            t.withdraw(accountno, amount);
        }
        else if (condition == 4)
        {
            int accountno = 0, amount = 0;
            cout << "Please enter account number: " << endl;
            cin >> accountno;
            cout << "Please enter amount: " << endl;
            cin >> amount;
            t.deposit(accountno, amount);
        }
        else if (condition == 5)
        {
            condition = 5;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }
}