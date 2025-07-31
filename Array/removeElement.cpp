class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int safe = 0; 
        int len = nums.size() - 1;

        while(safe<=len){
            if(nums[safe] == val){

                while(len>=safe && nums[len] == val){
                    len--;
                }

                if(safe>len){
                    break;
                }

                if(nums[len] != val){
                    nums[safe] = nums[len];
                    len--;
                }
            }

            if(nums[safe] != val){
                safe++;
            }

        }

        return safe;
    }
};
