class Solution {
public:

    bool validPalindrome(string s) {
    
        int n = s.length();
        
        for(int i=0, j=n-1; i < j; i++, j--) {
            
            if(s[i] != s[j]) {
                
                int i1 = i, j1 = j - 1;
                
                while(i1 < j1 && s[i1] == s[j1]) {
                    i1++;
                    j1--;
                } 
                
                int i2 = i + 1, j2 = j;
                
                while(i2 < j2 && s[i2] == s[j2]) {
                    i2++;
                    j2--;
                }
                
                return (i1 >= j1) || (i2 >= j2);
            }
        }
        
        return true;
    }
    
};