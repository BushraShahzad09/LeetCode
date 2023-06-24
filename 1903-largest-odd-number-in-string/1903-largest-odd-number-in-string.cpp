class Solution {
public:
    string largestOddNumber(string num) {
        // the idea is to remove even integer from last
        int n=num.length();
        int j=-1;
        for(int i=n-1;i>=0;i--)
        {
            int rem=(num[i]-'0');
            if(rem%2!=0)
            {
                j=i;
                break;
            }
        }
        if(j==-1) return "";
        string ans;
        for(int i=0;i<=j;i++)
        ans+=num[i];
        return ans;
        
    }
};