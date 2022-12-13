#include<iostream>
using namespace std;


void heapifyForMaxHeap(int arr[] , int n , int i){
    int larger = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<n && arr[larger] < arr[left]){
        larger =left;
    }
    if(right<n && arr[larger] < arr[right]){
        larger =right;
    }

    if(larger != i){
        swap(arr[i] , arr[larger]);
        heapifyForMaxHeap(arr,n,larger);
    }
}

void heapsort(int arr[] , int n){

    // time complexy is o of nlogn
    int size= n;

    while (size>1){
        swap(arr[size] , arr[1]);
        size--;
        heapifyForMaxHeap(arr,size,1);
    }
    
    
}


int main(){

    

    int arr[6] = {-1 , 54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapifyForMaxHeap(arr,n,i);
    }

    cout<<"printing"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"sorted array is"<<endl;

    heapsort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

