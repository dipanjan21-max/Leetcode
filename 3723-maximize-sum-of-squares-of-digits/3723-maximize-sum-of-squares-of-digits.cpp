class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        if(sum>9*num) return "";
        
        string ans;
        while(num-->0){
            int digit=min(9,sum);
            ans+=char(digit+'0');
            sum-=digit;
        }
        return sum==0?ans:"";
       }
};