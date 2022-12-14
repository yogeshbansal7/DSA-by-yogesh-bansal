int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int largest = 0;
        int i=1;
        
        while(i<n-1){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                
                int count =1;
                int j=i;
                while(j>=1 && arr[j] > arr[j-1]){
                    count++;
                    j--;
                }
                while(i<n-1 && arr[i] > arr[i+1]){
                    count++;
                    i++;
                }
                
                largest = max(largest, count);
            }
            else{
                i++;
            }
        }
        return largest;
    }
