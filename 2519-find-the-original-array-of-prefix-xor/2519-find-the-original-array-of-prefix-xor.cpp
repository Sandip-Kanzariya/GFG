class Solution {
public:

    // TC : O(n)
    // SC : O(n)
    
    vector<int> findArray(vector<int>& pref) {

        int n = pref.size();

        vector <int> ans(n, 0);

        ans[0] = pref[0];
        for(int i = 0;i < n - 1;i++){
            ans[i + 1] = pref[i] ^ pref[i + 1];
        }

        return ans;
    }
};