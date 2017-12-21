//
//  main.cpp
//  DS_practice
//
//  Created by Johann Schoeleinder on 21/12/2017.
//  Copyright © 2017 Johann Schoeleinder. All rights reserved.
//

#include <iostream>

// Linear List
#define MAXSIZE 20
typedef int ElemType; // this part can be replaced with template later

//Define a node of List
class Node
{
public:
    Node* next;
    ElemType data;
    
    Node( ElemType data_p);
};

Node::Node(ElemType data_p)
{
    this->data=data_p;
    this->next=NULL;
}

// Define a List
class List
{
public:
    int length;
    Node* head_pst;
    Node* tail_pst;
    
    List();
    void append( ElemType data_p);
};

List::List()
{
    this->length = 0;
    this->head_pst = NULL;
    this->tail_pst = this->head_pst;
}

void List::append(ElemType data_p)
{
    Node* newnode= new Node(data_p);
    
    if(this->length==0)
        this->head_pst = newnode;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
