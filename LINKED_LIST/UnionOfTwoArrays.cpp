#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
    //code here
    
    set<int> s;
        
    for(int i=0 ; i<n ; i++){
        s.insert(a[i]);
    }
        
    for(int i=0 ; i<m ; i++){

        s.insert(b[i]);
    }
    return s.size();
}


int main(){

    int n=5;
    int m = 6;
    int arr[5] = {1,2,3,4,5};
    int brr[6] = {1,2,1,4,5,4};

    int answer = doUnion(arr,n,brr,m);
    cout<<answer<<endl;

    return 0;
}