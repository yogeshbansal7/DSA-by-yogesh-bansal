#include<iostream>
using namespace std;


void heapifyForMaxHeap(int arr[] , int n , int i){

    // time complexity is o of logn
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

void heapifyForMinHeap(int arr[] , int n , int i){

    // time complexity is o of logn
    int smallest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<=n && arr[smallest] > arr[left]){
        smallest =left;
    }
    if(right<=n && arr[smallest] > arr[right]){
        smallest =right;
    }

    if(smallest != i){
        swap(arr[i] , arr[smallest]);
        heapifyForMinHeap(arr,n,smallest);
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

    
    return 0;
}

