class Solution {
public:
    int hIndex(vector<int>& citations) {
        int len = citations.size();
        if(len<=1 && citations[0]>=1){
            return 1;
        }
        sort(citations.begin(), citations.end());
        reverse(citations.begin(), citations.end());

        for(int i = 0; i<len; i++){
            if(citations[i]<i+1){
                return i;
            }
        }

        return len;
    }
};
