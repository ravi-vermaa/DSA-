class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxi=1;
        for(int i=0;i<n;i++){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[j-1])
                    count++;
                else
                    break;
            }
            maxi=max(maxi,count);
        }
        for(int i=0;i<n;i++){
            int count2=1;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[j-1])
                    count2++;
                else
                    break;
            }
            maxi=max(maxi,count2);
        }
        return maxi;
    }
};