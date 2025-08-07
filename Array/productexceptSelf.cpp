class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        if (len <= 1){
            return nums;
        }
        
        vector<int> prefix(len);
        vector<int> suffix(len);
        vector<int> ans(len);

        
        prefix[0] = 1;
        for(int i = 1; i<nums.size(); i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        suffix[nums.size() - 1] = 1;
        for(int i = nums.size()-2; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        for(int i = 0; i<nums.size(); i++){
            ans[i] = prefix[i] * suffix[i];
        }

        return ans;
    }
};
