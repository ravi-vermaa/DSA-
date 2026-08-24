class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        unsigned int diffbit=(unsigned int)ans & -(unsigned int)ans;
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i] & diffbit)==0)
                a^=nums[i];
            else
                b^=nums[i];
        }
        return {a,b};
    }
};