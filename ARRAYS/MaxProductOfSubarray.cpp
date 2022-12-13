#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0 ; i<n;i++){
        cin>>arr[i];
    }

    if(n==0){
        cout<<"0"<<endl;
    }

    int res=1,mini=1,maxi=1;

    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            maxi = maxi * arr[i];
            mini = min(mini = arr[i] , 1);
        }

        else if(arr[i] == 0){
            mini = maxi = 1;

        }
    }


    return 0;
}