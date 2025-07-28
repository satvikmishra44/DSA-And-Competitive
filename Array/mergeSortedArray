class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    // 3 Pointers
        int i = m-1;
        int j= n-1;
        int k = m+n-1;

// Comparing Largest Elements At Last Indexes

        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k] = nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }

        // Checking if still elements remain inside

        while(j>=0){
            nums1[k] = nums2[j];
            k--;
            j--;
        }

    }
};
