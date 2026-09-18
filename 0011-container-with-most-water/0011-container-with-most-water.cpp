class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        int i=0;
        int n=height.size();
        int j=n-1;
        while(i<=j){
            int length=min(height[i],height[j]);
            int width=j-i;
            int area=length*width;
            maxi=max(maxi,area);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        
        return maxi;
    }
};