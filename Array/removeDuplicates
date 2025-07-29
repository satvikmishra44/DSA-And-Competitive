class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      # Used 2 Pointers Approach, One For Reading And The Other One For Writing
        int current = nums[0];
        int unique = 1;
        int i = 1;
        int count = 1;
        while(i<nums.size()){
            if(nums[i] != current){
                nums[unique] = nums[i];
                current = nums[i];
                unique++;
                count++;
            }

            i++;
        }

        return count;
    }
};
