//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        
        int n = arr.size();
        int low = 0,
            flag = 0,
            high = n - 1;
            
        while(flag <= high){
            
            if(arr[flag] == 0){
                swap(arr[flag], arr[low]);
                low++;
                flag++;
            }
            else if(arr[flag] == 1){
                flag++;
            }
            else{
                swap(arr[flag], arr[high]);
                high--;
            }
            
        }
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends