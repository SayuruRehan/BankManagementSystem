#include "Hashtable.h"
#include "BST_Tree.h"
#include "Customer.h"
#include "admin.h"
#include "staff.h"
#include "string.h"

void boot()
{
    Hashtable H;
    BST_Tree T;
    H.starthash();
    T.load_Server();
}

int main()
{
    void boot();
    int condition = 0;
    while (condition != 4)
    {
        cout << "Welcome to the bank" << endl;
        cout << "Choose one of the following options:" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Customer" << endl;
        cout << "3. Staff" << endl;
        cout << "4. Exit" << endl;
        cin >> condition;
        if (condition == 1)
        {
            admin();
        }
        else if (condition == 2)
        {
            Customer();
        }
        else if (condition == 3)
        {
            Staff();
        }
        else if (condition == 4)
        {
            condition = 4;
        }
        else
        {
            cout << "Invalid input" << endl;
        }
    }

    system("pause");
    return 0;
}