class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums.size()-1;
        int farthest = 0;
        int jump = 1;

        if(nums[0] == 0 || len == 0){
            return 0;
        }

        int current = nums[0];
        for(int i = 0; i<len; i++){
            farthest = max(farthest, i + nums[i]);

            if(i==current){
                jump++;
                current = farthest;
            }

        }

        return jump;
    }
};
