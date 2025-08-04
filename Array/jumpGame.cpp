class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        int len = nums.size();

        if(len<=1){
            return true;
        }

        for(int i = 0; i<len; i++){
            if(farthest<i){
                return false;
            }
            farthest = max(farthest, i + nums[i]);
            if(farthest>=len-1){
                return true;
            }
        }

        return false;
    }
};
