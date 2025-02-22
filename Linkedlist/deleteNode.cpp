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

    ~Node(){

        int value = this->data;

        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void deletNode(int pos,Node*&head)
{
    if(pos ==1){
    
        Node*temp = head;
        head  = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node*curr = head;
        Node*prev = NULL;

        int cnt = 1;
        while(cnt<pos){
            prev = curr;
            curr= curr->next;
            cnt++;
        }
        prev ->next = curr->next;
        curr ->next = NULL;
        delete curr;
    }
}

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

   deletNode(4,head);
   
   print(head);

}