class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count=0;
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=max)
                max=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            count+=max-nums[i];
        }
        return count;
    }
};