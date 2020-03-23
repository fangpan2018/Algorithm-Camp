// faster than 87.71%
// less than 89.65%

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1) return s;
        int start = 0, max_len = 1;
        for(int i =0; i < s.size(); i++){
            int j = i, k = i;
            if(s.size()-i <= max_len/2) break;
            while(k < s.size()-1 && s[i]==s[k+1]) k++;//排除中间是一个或者两个的问题。
            while(k < s.size()-1 && j > 0 && s[k + 1] == s[j - 1]) { 
                ++k; 
                --j; 
            }
            int new_len = k - j + 1;
            if (new_len > max_len) { 
                start = j; 
                max_len = new_len;
            }
        }
        return s.substr(start, max_len);
    }
};
// 
// 
// 动规的写法，注意i和j。
// 
class Solution {
public:
    string longestPalindrome(string s) {
        int l = s.length();
        if(l<2)    return s;

        bool iterm[l][l];
        int b = 1;
        int max = 1;

        for(int i=0;i<l;i++){ //对角线
            iterm[i][i] = true;
        }

        for(int i=0;i<l-1;i++){ // 对角线上面一线。
            if(s[i]==s[i+1]){
                iterm[i][i+1]=true;
                if(2>max){
                    max = 2;
                    b = i;
                    // re[1] = i+1;
                }
            }    
            else    iterm[i][i+1] = false;
        }
        // cout<<l<<endl;
        if(l==2){
            return s.substr(b,max);
        } else{
            // cout<<max<<endl;
            for(int j=2; j<l; j++){
                for(int i=0; i<l-j; i++){
                    if(iterm[i+1][j+i-1]&&(s[i]==s[i+j])){
                        iterm[i][i+j] = true;
                        if(j>=max){
                            max = j+1;
                            b = i;
                        }
                        // cout<<i<<' '<<j<<endl;
                    }else{
                            iterm[i][i+j] = false;
                    }
                    // cout<<max<<endl;
                    // cout<<i<<endl;
                    // cout<<max<<endl;
                }
            }
            return s.substr(b,max);
        }
        
    }
};