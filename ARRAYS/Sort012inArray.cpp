#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];

    }

    int c0= 0;
    int c1= 0;
    int c2= 0;


    for(int i=0 ; i<n ; i++){
        if(arr[i]==0){
            c0++;
        }

        if(arr[i]==1){
            c1++;
        }

        else{
            c2++;
        }

    }

    for(int i=0 ;i<c0 ;i++){
        arr[i]=0;
    }

    for(int i = c0; i < c0+c1 ;i++){
        arr[i]=1;
    }

    for(int i=c0+c1 ;i<c0+c1+c2 ;i++){
        arr[i]=2;
    }



    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}