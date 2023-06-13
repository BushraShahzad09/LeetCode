//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        vector<int>result;
         int row,row_start,row_end,col,col_start,col_end;
        row_start=0;
        row_end=R-1;
        col_start=0;
        col_end=C-1;
        while(row_start<=row_end && col_start<=col_end)
        {
            for(int col=col_start;col<=col_end;col++)
            {
               result.push_back(a[row_start][col]);
            }
            row_start++;
            for(int row=row_start;row<=row_end;row++)
            {
                 result.push_back(a[row][col_end]);
            }
            col_end--;
            if(row_start<=row_end)
            {
                for(col=col_end;col>=col_start;col--)
                {
                     result.push_back(a[row_end][col]);
                }
                row_end--;
            }
            if(col_start<=col_end)
            {
                for(row=row_end;row>=row_start;row--)
                {
                    result.push_back(a[row][col_start]);
                }
                col_start++;
            }
            
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends