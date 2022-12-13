#include"bits/stdc++.h"
using namespace std;

class Stack{
    public:
    int n;
    queue<int> q1;
    queue<int> q2;

    Stack(){
        n=0;
    }

    void push(int x){
        q2.push(x);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop(){
        q1.pop();  
        n--;

    }

    int top(){
        return q1.front();
    }

    int size(){
        return n;
    }
};

int main(){

    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout<<st.size()<<endl;

    return 0;
}