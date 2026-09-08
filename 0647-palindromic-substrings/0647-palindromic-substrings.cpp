class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            string ans="";
            ans+=s[i];
            for(int j=i+1;j<s.length();j++){
                ans+=s[j];
                string temp=ans;
                reverse(temp.begin(),temp.end());
                if(ans==temp)
                    count++;
                
                
            }
        }
        return count+s.length();
    }
};