#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> arr(n);
     
    
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }

    bool found = false;

    sort(arr.begin() , arr.end());

    for(int i=0;i<n;i++){
        int low = i+1;
        int high = n-1;

        while(low < high){
            int sum = arr[i] + arr[low] + arr[high];

        if(sum == target){
            found = true;
            break;
        }

        else if(sum < target){
            low++;
        }

        else{
            high--;
        }
        }

    }

    if(found){
        cout<<"founded"<<endl;
    }
    else{
        cout<<"not founded"<<endl;
    }

    return 0;
}
