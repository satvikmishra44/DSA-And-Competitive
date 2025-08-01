// Intitial Approach

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> ans;
        if(k>len){
            k = k%len;
        }

        for(int i = k; i>0; i--){
                ans.push_back(nums[len-i]);
            }

            for(int i = 0; i<(len-k); i++){
                ans.push_back(nums[i]);
            }

        for(int i = 0; i<len; i++){
            nums[i] = ans[i];
        }
    }
};

// But Upper Approach Uses Space Of O(n), Downwards Approach Makes It In-Place And Uses O(1) Space

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        if(k>len){
            k = k%len;
        }
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
