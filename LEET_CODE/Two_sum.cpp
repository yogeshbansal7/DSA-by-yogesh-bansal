vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_set<int> mp;
        int x;
        int y;
        
        for(int i=0; i<nums.size(); i++){
            y= nums[i];
            x = target - y;
            
            if(mp.find(x) != mp.end()){
                break;
            }
            else{
                mp.insert(y);
            }
        }
        int second ;
        for(int j=0; j<nums.size(); j++){
            if(nums[j] == x ){
                second = j;
                break;
                
            }
        }
        
        int one;
        for(int m=0; m<nums.size(); m++){
            if(nums[m] == y && m>second ){
                one = m;
                break;
                
            }
        }
        ans.push_back(second);
        ans.push_back(one);
        
        return ans;
    }
