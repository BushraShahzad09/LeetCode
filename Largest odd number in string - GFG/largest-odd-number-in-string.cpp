//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        // remove even integers from last
        int n=s.length();
        int j=-1;
        for(int i=n-1;i>=0;i--)
        {
            int rem=(int)(s[i]);
            if(rem%2!=0)
            {
                j=i;
                break;
            }
        }
        if(j==-1)
        return "";
        string ans;
        
            for(int i=0;i<=j;i++)
            ans+=s[i];
            return ans;
            
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends