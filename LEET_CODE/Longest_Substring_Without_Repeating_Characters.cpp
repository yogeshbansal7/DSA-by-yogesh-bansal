int lengthOfLongestSubstring(string s) {
        
        
    map<char, int> seen ;
    int maximum_length = 0;
    int start = 0;
 
    for(int end = 0; end < s.length(); end++)
    {
         
        
        if (seen.find(s[end]) != seen.end())
        {
             
            start = max(start, seen[s[end]] + 1);
        }
 
        seen[s[end]] = end;
        maximum_length = max(maximum_length,
                             end - start + 1);
    }
    return maximum_length;
   
    }
