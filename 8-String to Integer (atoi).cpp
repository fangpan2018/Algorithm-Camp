// faster than 83.96% 
// less than 79.10%

// 注意检查数值大小
class Solution {
public:
    int myAtoi(string str) {
        int ret = 0;
        int head = 1;
        int i = 0;
        
        while(str[i]==' ') i++;
        
        if(str[i]=='-') head = -1;
        if(str[i]=='+'||str[i]=='-')    i++;
        while(i<str.size()&&isdigit(str[i])){
            int t = str[i++] - '0';
            //============ ！==============
            if(ret > INT_MAX/10 || (ret==INT_MAX/10 && t>7)){
                return head>0?INT_MAX:INT_MIN;
            }
            ret = ret*10 + t;
        }
        return head*ret;
    }
};