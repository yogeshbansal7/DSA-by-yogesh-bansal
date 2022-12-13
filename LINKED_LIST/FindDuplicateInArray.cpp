#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int findDuplicate(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());
        
        for(int i =0;i<nums.size();i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        return -1;
}

int main(){

    vector<int> arr={2,5,9,6,7,5,1};
    cout<<findDuplicate(arr)<<endl;


    return 0;
}