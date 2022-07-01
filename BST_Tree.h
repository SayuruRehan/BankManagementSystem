#pragma once
#include "BST_Node.h"
#include "Hashtable.h"
#include <stdio.h>

class BST_Tree
{
    vector <int> v;

    public: 
    BST_Tree();
    Hashtable h;
    BST_Node *Root;
    BST_Node* BST_Tree::delete_Account(BST_Node *, int);
    BST_Node* search(BST_Node*,int);
   
    void add_Account(string, string, int, int, int);   
	void withdraw(int, int);
	void deposit(int, int);
	void editaccount_byAdmin();
	void transfer(int, int, int);
	void transaction_history();
	void findMax(BST_Node*);
	void load_Server();
	void update_server(BST_Node *);
	void printoinfo(BST_Node*);
};