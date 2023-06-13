//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        int result=-1;
        if(n==1)
        {
            if(v[0]<=x)
            result=0;
            else
            result=-1;
        }
        else
        {
            int s=0,e=n-1;
            while(s<=e)
            {
                int mid=s+(e-s)/2;
                if(v[mid]==x)
                return mid;
                if(v[mid]<x)
                {
                    result=mid;
                    s=mid+1;
                }
                else if(v[mid]>x)
                e=mid-1;
            }
        }
        return result;
        
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends