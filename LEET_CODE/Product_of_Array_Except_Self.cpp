vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        int flag = 0;
        vector<int> ans;
        int p = 1;
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                flag++;
                continue;
                
            }
            p=p*nums[i];
        }
        
        bool is = true;
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                is = false;
            }
        }
        
        if(is){
            for(int i=0;i<n;i++){
                ans.push_back(0);
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(flag>1){
                    ans.push_back(0);
                }
                if(flag==1){
                    if(nums[i] != 0){
                        ans.push_back(0);
                    }
                    else{
                        ans.push_back(p);
                    }
                }
                else if(flag==0){
                    int elemnt = p / nums[i];
                    ans.push_back(elemnt);
                }
            }
        }
        return ans;
    }
