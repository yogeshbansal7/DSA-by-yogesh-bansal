int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prevSum;
        int n = nums.size();
 
    int res = 0;
     int currSum = 0;
 
    for (int i = 0; i < n; i++) {
 
        currSum += nums[i];

        if (currSum == k)
            res++;
 

        if (prevSum.find(currSum - k) != prevSum.end())
            res += (prevSum[currSum - k]);
 
        prevSum[currSum]++;
    }
 
    return res;
}
