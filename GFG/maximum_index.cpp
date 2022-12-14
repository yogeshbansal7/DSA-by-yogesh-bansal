int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        if(N ==1 ){
            return 0;
        }
        
        int lmin[N];
        int rmax[N];
        
        lmin[0] = A[0];
        rmax[N-1] = A[N-1];
        
        for(int i=1; i<N; ++i){
            lmin[i] = min(lmin[i-1] , A[i]);
        } 
        
        
        for(int j=N-2; j>=0; --j){
            rmax[j] = max(A[j], rmax[j+1] );
        } 
        
        int i=0;
        int j=0;
        int dif = -1;
        
        while(i<N && j<N){
            if(lmin[i] <= rmax[j]){
                dif = max(dif, j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return dif;
    }
