//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        int b[n];
        int flag =1;
        for(int i = 0 ;i < n -1; i++)
        {
            if(arr[i]>arr[i+1])
                flag =0;
        }
        // for(int i = 0; i< n ; i++)
        // {
        //     b[i]= arr[i];
            
        // }
        // sort(b, b+n);
        // // for(int i = 0 ; i < n;i++)
        // // {
        // //     cout<<b[i]<<" ";
        // // }
        // // cout<<"Checking: "<<endl;
        // for(int i = 0 ; i<n ;i++ )
        // {
        //     if(b[i] == arr[i])
        //         flag =1;
        //     else
        //         flag = 0;
        // }
        if(flag ==1)
            return true;
        else
            return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends