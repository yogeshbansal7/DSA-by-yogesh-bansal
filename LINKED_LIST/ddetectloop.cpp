#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int value){
        data=value;
        next=NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next =NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }

};
//APNA COLLEGE 

void insertAtTail(Node* &head , int value){

    Node* n=new Node(value);

    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp-> next!= NULL){
        temp = temp->next;
    }
    temp -> next =n;
}


void insertAtHead(Node* &head,int value){
    Node* n=new Node(value);
    n-> next=head;
    head=n;
}
void insertAtPosition(Node* & head, int position, int d) {
    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}


void display(Node* &head){
    Node* temp=head;
    while(temp!= NULL){
        cout << temp ->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool search(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp-> data == key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int length(Node* head){
    Node* temp=head;
    int len=0;
    while(temp != NULL){
        len++;
        temp=temp->next;
    }

    return len;
}

Node* reverse(Node* &head){

    Node*prev=NULL;
    Node*next=NULL;
    Node*curr=head;

    while(curr != NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    head=prev;
    return head;

}

Node* kreverse(Node* &head , int k){
   
    if(head==NULL){
        return NULL;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    int count =0;
    while(curr!=NULL && count <k){
        next = curr->next;
        curr -> next = prev;
        prev=curr;
        curr=next;
        count++;
    }

    if(next!=NULL){
        head->next= kreverse(next,k);
    }

    head=prev;
    return head;
}

bool detectloop(Node* &head){
    if(head==NULL){
        return true;
    }
    
    Node* temp=head->next;
    while(temp!=head && temp!= NULL){
        temp=temp->next;
    }

    if(temp==head){
        return true;
    }
    else if(temp==NULL){
        return false;
    }
}

int main(){
    
    Node* head =NULL;
    insertAtTail(head,17);
    insertAtTail(head,24);
    insertAtTail(head,32);
    insertAtTail(head,45);
    insertAtTail(head,57);
    insertAtTail(head,96);
    display(head);

    // reverse(head);
    // display(head);

    kreverse(head,2);
    display(head);

    if(detectloop(head)){
        cout<<"yes"<<endl;
    }
    else if(!detectloop(head)){
        cout<<"no"<<endl;
    }

    


    return 0;
}