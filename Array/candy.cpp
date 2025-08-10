// Initial Approach

class Solution {
public:
    int candy(vector<int>& ratings) {
        int len = ratings.size();
        if(len == 1){
            return 1;
        }
        vector<int> candies(len);


        for(int i = 0; i<len; i++){
            candies[i] = 1;
        }

        for(int i = 1; i<len; i++){
            if(ratings[i] > ratings[i-1]){
                candies[i] = candies[i-1] + 1;
            }
        }

        for(int i = len - 2; i>=0; i--){
            if(ratings[i] > ratings[i+1]){
                candies[i] = max(candies[i], candies[i+1] + 1);
            }
        }

        int ans = 0;
        for(int i = 0; i<len; i++){
            ans += candies[i];
        }
        
        return ans;
    }
};

// Optimised Approach with O(1) extra space.

class Solution {
public:
    int candy(vector<int>& ratings) {
        int len = ratings.size();
        if(len == 1){
            return 1;
        }
        
        int candies = 1;
        int up = 0, peak = 0, down = 0;

        for(int i = 1; i<len; i++){
            if(ratings[i]>ratings[i-1]){
                up++;
                peak = up;
                down = 0;
                candies += up+1;
            }

            else if(ratings[i]<ratings[i-1]){
                up = 0;
                down++;
                candies += 1 + down - (peak>=down ? 1 : 0);
            }

            else{
                candies++;
                up = 0;
                down = 0;
                peak = 0;
            }
        }

        return candies;
    }
};
