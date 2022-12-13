//not working right




#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0 ; i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    int j = n-1;

    while(i<=j){
        while(i<=n-1 && arr[i] >0){
            i++;
        }
        while(j>=0 && arr[i] <0){
            j--;
        }
        if(i<j){
            // swap(arr[i] , arr[j]);
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    for(int i=0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }

    // int k=0;
    // while(k<n && i<n){
    //     swap(arr[k] , arr[i]);
    //     k=k+2;
    //     i++;
    // }

    

    return 0;
}