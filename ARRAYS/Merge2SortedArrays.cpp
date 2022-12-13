#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,i,j;
    cin>>n>>m;

    int arr1[n];
    int arr2[m];

    for(i=0; i<n ;i++){
        cin>>arr1[i];
    }

    for(j=0; j<n ;j++){
        cin>>arr2[j];
    }

    int s = n-1;
    int e = 0;

    while(s>=0 && s<m){
        if(arr1[i] > arr2[j]){
            swap(arr1[i] , arr2[j]);
        }
        else{
            break;
        }
    }

    sort(arr1 , arr1 + n);
    sort(arr2 , arr2 + n);

    for(i=0; i<n ;i++){
        cout<<arr1[i];
    }

    for(j=0; j<m ;j++){
        cout<<arr2[j];
    }



    return 0;
}