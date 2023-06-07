//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    // brute force is simple
	  /*  vector<int>temp;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        temp.push_back(arr[i]);
	    }
	    
	    int k=temp.size();
	    
	    for(int i=0;i<k;i++)
	    {
	        arr[i]=temp[i];
	    }
	    for(int i=k;i<n;i++)
	    arr[i]=0;
	}*/
	// optimal solution cant understand two pinter approchhhhh
	int j=-1;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]==0)
	    {
	        j=i;
	        break;
	    }
	}
	if(j==-1) return;
	for(int i=j+1;i<n;i++)
	{
	    if(arr[i]!=0)
	    {
	        swap(arr[i],arr[j]);
	        j++;
	    }
	}
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends