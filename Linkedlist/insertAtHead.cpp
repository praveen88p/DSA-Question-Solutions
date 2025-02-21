#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Node{
     

    public:
    int data;
    Node * next;

    Node(int data){
     this->data = data;
     this->next  =NULL;
    }
};

void InsertAtHead(Node*&head, int d){
      
    Node*temp = new Node(d);
    temp ->next = head;
    head = temp;
}

void print(Node*&head){
    Node*temp  = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    
}

int main(){
    
    Node*node1 = new Node(10);
    Node*head = node1;
    InsertAtHead(head,12);
    InsertAtHead(head,13);
    InsertAtHead(head,14);

   print(head);

}