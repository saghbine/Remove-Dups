//
//  list.h
//  CTCI 2.1 Remove Dups
//
//  Created by daniel saghbine on 1/16/25.
//

#ifndef list_h
#define list_h

#include <iostream>
using namespace std;

template<class T>
class List;

template<class T>
class Node
{
    T data;
    Node<T>* next;
    
    Node(const T &e){data=e; next=NULL;}
    
    friend class List<T>;
};

template<class T>
class List
{
    Node<T>* head;
    
    void remove(Node<T>* p){Node<T>* d=p->next; p->next=d->next; delete d;}
    void pop();
    
public:
    List(){head=NULL;}
    void push(const T &e){Node<T>* n=new Node<T>(e); n->next=head; head=n;}
    
    void Remove_Dups()
    {
        for(Node<T>* n1=head; n1 != NULL; n1=n1->next) // for node n1 at head...tail in singly linked list
            for(Node<T>* n2=n1; n2 != NULL; n2=n2->next) // for node n2 at n1...tail in singly linked list
                while(n2->next != NULL && n1->data == n2->next->data) // while n2 isn't tail and n1's data equates to n2's next's data
                    remove(n2); // remove n2 from singly linked list
    }
    
    void show() const
    {
        for(Node<T>* n=head; n != NULL; n=n->next)
            cout<<n->data<<(n->next != NULL ? "->" : "");
        
        if(head != NULL)
            cout<<endl;
    }
    
    ~List()
    {
        while(head != NULL)
            pop();
    }
};

template<class T>
void List<T>::pop()
{
    if(head != NULL)
    {
        Node<T>* n=head->next;
        
        delete head;
        head=n;
    }
}

#endif /* list_h */
