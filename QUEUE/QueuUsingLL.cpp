#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    public:
    Node* front;
    Node* back;

    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        Node* n = new Node(x);
        if(front == NULL){
            front = n;
            back = n;
            return;
        }

        back -> next = n;
        back = n;
    }

    void pop(){
        if(front == NULL){
            cout<<"underflow"<<endl;
            return;
        }
        Node* todelete = front;
        front = front -> next; 
        delete todelete;
    }

    int peek(){
        if(front == NULL){
            cout<<"no element at top"<<endl;
            return -1;
        }

        return front->data ;

    }

    bool empty(){
        if(front == NULL){
            cout<<"empty"<<endl;
            return true;
        }
        return false;

    }
};

int main(){

    queue q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();
    

    cout<<q.empty()<<endl;

    q.pop();
    q.pop();
    cout<<q.empty()<<endl;

    return 0;
}