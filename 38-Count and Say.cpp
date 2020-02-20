// faster than 77.19%
// less than 93.06%

class Solution {
public:
    string countAndSay(int n) {
        string re = "1";
        int i = 1;
        if(n==1) return re;
        while(i<n){
            string in_ = "";
            int count = 0;
            char j = re[0];
            for(int i_=0; i_<re.size(); i_++){
                if(re[i_]==j){
                    count++;
                }else{
                    in_ += to_string(count) + j;
                    count = 1;
                    j = re[i_];
                }
            }
            in_ += to_string(count) + j;
            re = in_;
            i++;
        }
        return re;
    }
};