//
// Created by Parth S.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <fstream>
using namespace std;

struct node{
    int data;
    struct node * next;
};

class LinkedList{
private:
    node *head;
public:
    LinkedList();
    explicit LinkedList(node* h);
    ~LinkedList();
    node* search(node *h, int x);
    void insertNode(node **h, int x); //Inserts node at the beginning of the linked list
    node *predecessor(node *element, int x);
    void deleteNode(node **deleted, int x);
};


#endif //LINKEDLIST_H
