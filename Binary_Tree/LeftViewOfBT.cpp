#include<bits/stdc++.h>
using namespace std;

bool isvalid(string s){

    int n = s.length();

    stack<char> st;
    bool ans = true;
    for(int i=0 ; i< n ;i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }

        else if(s[i] == ')'){
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }

        else if(s[i] == '}'){
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                ans= false;
                break;
            }
        }

        else if(s[i] == ']'){
            if(!st.empty() && st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }

    if(!st.empty()){
        ans = false;
    }

    return ans;
}

int main(){

    string str = "[{()}]";

    if(isvalid(str)){
        cout<<"valid";
    }
    else{
        cout<<"not valid";
    }

    return 0;
}