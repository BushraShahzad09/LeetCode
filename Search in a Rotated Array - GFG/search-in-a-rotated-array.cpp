//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        int s=l;
        int e=h;
        //complete the function here
        while(s<=e){
            int mid=(s+e)/2;
            if(A[mid]==key){
            return mid;
            }
          if(A[s]<=A[mid])
            {
                //left line
                if(key>=A[s] && key<=A[mid])
                e=mid-1;
                else
                s=mid+1;
            }
            else 
            {
               // right line
                if(key>=A[mid]&& key<=A[e])
                s=mid+1;
                else
                e=mid-1;
            }
            
        }
        return -1;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends