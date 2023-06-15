//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
         if(s.size()==1) return s;
        int max_len=1;
        int n=s.length();
        int start=0,end=0;
        // odd length
        for(int i=0;i<n-1;i++)
        {
            int left=i,right=i;
            while(left>=0 && right<n)
            {
                if(s[left]==s[right])
                {
                    left--;
                    right++;
                }
                else break;
            }
            int len=right-left-1;
            if(len>max_len)
            {
                max_len=len;
                start=left+1;
                end=right-1;
            }
            
        }
        // even length
        for(int i=0;i<n-1;i++)
        {
            int left=i,right=i+1;
            while(left>=0 && right<n)
            {
                if(s[left]==s[right])
                {
                    left--;
                    right++;
                }
                else break;
            }
            int len=right-left-1;
            if(len>max_len)
            {
                max_len=len;
                start=left+1;
                end=right-1;
            }
        }
         return s.substr(start,max_len);

    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends