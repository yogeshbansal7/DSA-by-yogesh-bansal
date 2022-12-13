#include<iostream>
#include<stack>
using namespace std;

void ReverseSentenceUsingStack( string str){

    stack<string> st;

    for(int i = 0;i<str.length() ; i++){

        string word ="";
        while( str[i] != ' ' && i<str.length()){
            word = word + str[i];
            i++;
        }

        st.push(word);

    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<endl;

}

int main(){

    string s = "jiwan kumar";
    ReverseSentenceUsingStack(s);
    return 0;
}