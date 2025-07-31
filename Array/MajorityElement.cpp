// Initial Approach By First Sorting And Then Keeping Count Of It

int Solution(vector<int> &nums){
  sort(nums.begin(), nums.end());
  int len = nums.size();
  int current = nums[0];
  int count = 1;

  if(len == 1){
    return nums[0];
    }

  for(int i = 0; i<len-1; i++){
    if(nums[i] == nums[i+1]{
      count++;
    }else{
      count = 1;
    }

    if(count>len/2){
      return nums[i]
        }

  }

return current;

// Optimized Aproach Using Boyer-Moore Voting Algorithm

int len = nums.size();
int current = nums[0];

for(int i = 0; i<len; i++){
if(count = 0){
current = nums[i];
}
if(current == nums[i]){
count++;
} else{
count--;
}
}

return current;
