//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
    
        int ans = -1, sec = -1;
        int n = arr.size();
        for(int i = 0;i < n;i++){
            if(ans < arr[i]){
                
                ans = arr[i];
            }
        }
        
        for(int i = 0;i < n;i++){
            if(ans != arr[i] && sec < arr[i]){
                sec = arr[i];
            }
        }
        
        return sec;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends