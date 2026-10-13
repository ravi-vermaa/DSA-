class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        int l=0;
        long long r=nums.size()-1;
        long long ans=0;
        while(l<=r){
            if(l==r)
                ans+=nums[r];
            ans+=nums[r]-nums[l];
            l++;
            r--;
        }
        return ans;
    }
};