//
// Created by Parth on 5/25/2020.
//
#include "LinkedList.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

/*
Class Library File
*/
// Constructor
LinkedList::LinkedList(){
    head = nullptr;
}
LinkedList::LinkedList(node *h){
    head = h;
}
// Destructor
LinkedList::~LinkedList(){
    delete head;
}

void LinkedList::insertNode(node **head, int x) {
    node *newNode;
    newNode = static_cast<node *>(malloc(sizeof(node)));
    newNode->data = x;
    newNode->next = *head;
    *head = newNode;
}

node* LinkedList::search(node *list, int item) {
    if(!list){
        return nullptr;
    }
    if(list->data == item){
        return list;
    }
    else{
        return search(list->next, item);
    }
}

node* LinkedList::predecessor(node *element, int x) {
    if(!element || !element->next){
        return nullptr;
    }
    if ((element->next)->data == x){
        return element;
    }
    else{
        return predecessor(element->next, x);
    }
}
void LinkedList::deleteNode(node **deleted, int x) {
    node *temp = search(*deleted, x);
    if(!temp){
        node *pred = predecessor(*deleted, x);
        if(pred == nullptr){
            *deleted = temp->next
        }
        else{
            pred->next = temp->next;
        }
        free(temp);
    }
}