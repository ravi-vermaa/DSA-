class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int j=floor(sqrt(c));
        long long int i=0;
        while(i<=j){
            if((i*i+j*j)==c)
                return true;
            else if((i*i+j*j)<c)
                i++;
            else
                j--;
        }
        return false;
    }
};