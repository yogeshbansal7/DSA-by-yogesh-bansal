int findUnsortedSubarray(vector<int>& nums) {
        int len = nums.size() - 1, left = -1, right = -1, maxN = nums[0], minN = nums[len];
        for (int i = 1; i <= len; i++) {
            int a = nums[i], b = nums[len-i];
            if (a < maxN) right = i;
            else maxN = a;
            if (b > minN) left = i;
            else minN = b;
        }
        return max(0, left + right - len + 1);
    }
