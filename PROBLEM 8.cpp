class Solution {
public:
    int myAtoi(string s) {
        if(s.length() ==0){
            return 0;
        }
        int  i= 0;
        while( i < s.size() && s[i] == ' '){
            i++;
        }
        s = s.substr(i);
        int sign = +1;
        long ans =0;
        if(s[0] == '-') sign = -1;
        int max = INT_MAX,min= INT_MIN;
        i = (s[0] == '+' || s[0] == '-')? 1:0;
        while(i < s.length()){
            if(s[i] == ' ' || !isdigit(s[i])) break;
            ans = ans *10 + s[i] - '0';
            if(ans > max && sign == 1){
                return max;
            }
            if(sign == -1 && -1* ans  < min ){
                return min;
            }
            i++;
        }
        return (int)(sign*ans) ;
    }   
};
