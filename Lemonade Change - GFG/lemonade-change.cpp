//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int five_count=0,ten_count=0,twenty_count=0;
        for(int i=0;i<N;i++)
        {
            if(bills[0]!=5) return false;
            if(bills[i]==5) five_count++;
            if(bills[i]==10)
            {
                if(five_count) 
                {
                    five_count--;
                    ten_count++;
                }
                else return false;
            }
            if(bills[i]==20)
            {
                if(five_count && ten_count)
                {
                    five_count--;
                    ten_count--;
                    twenty_count++;
                }
                else if(five_count>=3 )
                {
                    five_count=five_count-3;
                    twenty_count++;
                }
               else return false;
            }
            
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends