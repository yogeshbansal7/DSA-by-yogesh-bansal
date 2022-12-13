#include<iostream>
#include<queue>
using namespace std;

int KthSmallestElementInHeap(int arr[] , int size , int k){
    priority_queue<int> pq;

    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    for(int i=k;i<size;i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    int ans = pq.top();
    return ans;
}

int main(){

    int arr[6] = {56,15,89,65,36,17};
    int n = 6;
    int k = 3;

    int final = KthSmallestElementInHeap(arr,n,k);
    cout<<final<<endl;

    return 0;
}