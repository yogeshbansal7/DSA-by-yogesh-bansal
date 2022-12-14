int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n = nums.size();
	    int ans = 0;
	    pair<int,int> with[n];
	    for(int i=0; i<n; i++){
	        with[i].first = nums[i];
	        with[i].second = i;
 	   }
 	   
 	   sort(with, with+n);
 	   
 	   vector<bool> visited (n,false);
 	   
 	   for(int j=0;j<n;j++){
 	       int old = with[j].second;
 	       if(visited[j] || old == j){
 	            continue;
 	       }
 	       int node = j;
 	       int cycle = 0;
 	       while(!visited[node]){
 	            visited[node] = true;
 	            int next = with[node].second;
 	            node = next;
 	            cycle++;
 	       }
 	       ans = ans + cycle -1;
 	   }
 	   return ans;
	}
