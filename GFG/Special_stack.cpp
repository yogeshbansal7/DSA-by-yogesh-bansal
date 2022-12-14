#include<iostream>
#include<stack>
#include<climits>

void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size() == n){
        return true;	    
	}
	else{
	    return false;
	}
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.empty()){
	    return true;
	}
	else{
	    return false;
	}
}

int pop(stack<int>& s){
	// Your code goes here
	s.pop();
}

int getMin(stack<int>& s){
	// Your code goes here
	int mini = INT_MAX;
	while(!s.empty()){
	    if(s.top() < mini){
	        mini = s.top();
	        s.pop();
	    }
	    else{
	        s.pop();
	    }
	}
	
	return mini;
}
