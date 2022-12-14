#include<string>


class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0; i<n; i++){
    	    string str = to_string(a[i]);
    	    int len = str.length();
    	    
    	    int start = 0;
    	    while(start < len){
    	        if(str[start] == str[len - 1]){
    	            start++;
    	            len--;
    	        }
    	        else{
    	            return 0;
    	            break;
    	        }
    	    }
    	    
    	}
    	
    	return 1;
    }
};
