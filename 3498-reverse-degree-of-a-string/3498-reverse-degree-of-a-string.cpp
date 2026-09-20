class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            int temp='z'-s[i];
            int temp2=(temp+1)*(i+1);
            ans+=temp2;
        }
        return ans;
    }
};