// #include<iostream>
// #include<deque>

#include"bits/stdc++.h"
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);

    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }

    dq.pop_back();
    dq.pop_front();

    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }


    return 0;
}