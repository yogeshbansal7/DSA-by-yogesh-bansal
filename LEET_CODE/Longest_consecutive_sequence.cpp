int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int largest = 1;
        unordered_set<int> s;
        
        if(n==0){
            return 0;
        }
        
        
        
        for(auto i:nums){
            s.insert(i);
        }
        
        for(auto element : s){
            int count = 1;
            int parent = element - 1;
            
            if(s.find(parent) == s.end()){
                int next = element + 1;
                
                
                while(s.find(next) != s.end()){
                    next++;
                    count++;
                }
            }
            if(count > largest){
                largest = count;
            }
            
        }
        
        
        
        
        
        return largest;
        
    }
