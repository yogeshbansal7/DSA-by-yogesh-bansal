int trap(vector<int>& height) {
        int n = height.size();
        if(n<=2){
            return 0;
        }
        
        vector<int> l(n,0);
        vector<int> r(n,0);
        
        l[0] = height[0];
        r[n-1] = height[n-1];
        
        
        for(int i=1;i<n;i++){
            l[i] = max(l[i-1] , height[i]);
            r[n-i-1] = max(r[n-i] , height[n-i-1]);
            

        }
                    int water = 0;
            for(int i=0;i<n;i++){
                water = water + min(l[i],r[i]) - height[i];
            }
        
        return water;
        
    }
