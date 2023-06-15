//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        // since the array is sorted arrat we apply binary search
        int s=0,e=n-1;
        if(arr[n-1]>=arr[0]) return arr[0];
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int previous=(mid+n-1)%n;
            if(arr[mid]<=arr[previous])
            return arr[mid];
            else if(arr[mid]>=arr[0])
            s=mid+1;
            else
            e=mid-1;
        }
        return 0;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends