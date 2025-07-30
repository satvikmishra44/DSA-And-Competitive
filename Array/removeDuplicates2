class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int safe = 0;
        for(int i = 0; i<nums.size(); i++){
            if(safe<2 || nums[i] != nums[safe-2]){
                nums[safe++] = nums[i];   
            }
        }
        return safe;
    }
};
