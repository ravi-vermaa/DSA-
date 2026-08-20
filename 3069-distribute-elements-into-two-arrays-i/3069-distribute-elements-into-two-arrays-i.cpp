class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2;i<n;i++){
            if(arr1.back()>arr2.back())arr1.push_back(nums[i]);
            else arr2.push_back(nums[i]);
            // if(i%2==0)
            //     arr1.push_back(nums[i]);
            // else
            //     arr2.push_back(nums[i]);
        }
        vector<int>result(n);
        for(int i=0;i<arr1.size();i++)result[i]=arr1[i];
        int m=arr1.size();
        for(int i=0;i<arr2.size();i++)result[i+m]=arr2[i];
        // if(arr1[arr1.size()-1] >arr2[arr2.size()-1]){
        //     arr1.push_back(arr2[arr2.size()-1]);
        // }
        // else{
        //     arr2.push_back(arr1[arr2.size()-1]);
        // }
        // for(int i=0;i<arr2.size()-1;i++){
        //     arr1.push_back(arr2[i]);
        // }
        return result;
    }
};