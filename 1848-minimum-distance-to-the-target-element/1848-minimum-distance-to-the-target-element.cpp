class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int mum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                int mini=abs(i-start);
                mum=min(mini,mum);
            }
        }
        return mum;
    }
};