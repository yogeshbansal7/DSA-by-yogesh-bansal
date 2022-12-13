// // C++ code for k largest elements in an array
// #include <bits/stdc++.h>
// using namespace std;

// void kLargest(int arr[], int n, int k)
// {
// 	// Sort the given array arr in reverse order.
// 	sort(arr, arr + n, greater<int>());

// 	// Print the first kth largest elements
// 	for (int i = 0; i < k; i++)
// 		cout << arr[i] << " ";
// }

// // driver program
// int main()
// {
// 	int arr[] = { 1, 23, 12, 9, 30, 2, 50 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	int k = 3;
// 	kLargest(arr, n, k);
// }

// // This code is contributed by Aditya Kumar (adityakumar129)




#include<iostream>
using namespace std;

void kreverse(int n,int arr[],int k){
    int min;
    int temp;
    cout<<"start"<<endl;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }

        }
    } 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}


int main(){
    int n=5;
    int k;
    int arr[]={2,4,6,3,5};

    kreverse( n, arr, k);

    return 0;
}