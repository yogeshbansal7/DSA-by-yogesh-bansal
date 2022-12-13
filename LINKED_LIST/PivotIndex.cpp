#include<iostream>
using namespace std;

int main(){

    int arr[6] = {50,60,70,80,10,20};
    int n =6;
    int count = 0;

    int i = 0;
    while(arr[i] < arr[i+1]){
        count++;
        i++;
    }

    cout<<count<<endl;

    return 0;
}