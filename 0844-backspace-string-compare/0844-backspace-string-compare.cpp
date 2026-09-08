class Solution {
public:
    bool backspaceCompare(string s, string t) {
    stack<char> st1,st2;
    for(int i=0;i<s.length();i++){
        if(s[i]=='#'){
            if(!st1.empty()){
                st1.pop();
            }
        }
        else
            st1.push(s[i]);
    }
    
    for(int j=0;j<t.length();j++){
        if(t[j]=='#'){
            if(!st2.empty()){
                st2.pop();
            }
        }
        else
            st2.push(t[j]);
    }
    string str="";
    while(!st1.empty()){
        str+=st1.top();
        st1.pop();
    }
    reverse(str.begin(),str.end());
    string str2="";
    while(!st2.empty()){
        str2+=st2.top();
        st2.pop();
    }
    reverse(str2.begin(),str2.end());
    
    return str==str2;
    }
};