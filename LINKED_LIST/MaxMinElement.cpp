#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];

    }

    int min = INT16_MAX;
    int max = INT16_MIN;

    for(int i=0; i< n ;i++){
        if(min>arr[i]){
            min = arr[i];
        }

        if(max<arr[i]){
            max = arr[i];
        }
    }

    cout<<min<<" "<<max;


    return 0;
}