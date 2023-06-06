class Solution {
public:
    int expand_around_index(string s,int left,int right)
    {
        int count=0;
        while(left>=0 && right<s.length() && s[left]==s[right] )
        {
            count++;
            left--;
            right++;
        }
        return count;
    } 
    int countSubstrings(string s) {
        // brute force O(n^3)
        // op O(n^2) - simultaneous find substring & check palindrome
        int total_count=0;
        for(int i=0;i<s.length();i++)
        {
            // odd substringss- left and right pointing to same index
            int odd=expand_around_index(s,i,i);
            total_count+=odd;
            //even substring -left and right pointing to adjacent positions
            int even=expand_around_index(s,i,i+1);
            total_count+=even;
        }
        return total_count;

        
    }
};