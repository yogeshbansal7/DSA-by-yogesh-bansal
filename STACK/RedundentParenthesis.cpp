#include"bits/stdc++.h"
using namespace std;

int main(){

    string str;
    cin>>str;
    stack<char> st;

    bool answer = false;

    for(int i =0; i< str.size() ; i++){
        if(str[i] == '+' ||str[i] == '-' || str[i] == '*' || str[i] == '/'){
            st.push(str[i]);
        }
        if(str[i] == '('){
            st.push(str[i]);
        }

        else if(str[i] == ')'){

            if(st.top() == '('){
                answer = true;
                break;
            }

            while(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/'){
                st.pop();
            }
            st.pop();
        }


    }

    if(answer){
        cout<<"redundant bracker is there "<<endl;
    }
    else{
        cout<<"all correct "<<endl;
    }

    return 0;
}